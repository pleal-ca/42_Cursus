/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megafone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 10:16:40 by megafone          #+#    #+#             */
/*   Updated: 2020/09/12 20:41:21 by pleal-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (char)c)
		if (!s[i++])
			return (NULL);
	return ((char *)&s[i]);
}

int		append_line(char **store, int fd, char **line)
{
	int		len;
	char	*tmp;

	len = 0;
	while (store[fd][len] != '\n' && store[fd][len] != '\0')
		len++;
	if (store[fd][len] == '\n')
	{
		*line = ft_substr(store[fd], 0, len);
		tmp = ft_strdup(&store[fd][len + 1]);
		free(store[fd]);
		store[fd] = tmp;
		if (store[fd][0] == '\0')
			ft_strdel(&store[fd]);
	}
	else
	{
		*line = ft_strdup(store[fd]);
		ft_strdel(&store[fd]);
		return (0);
	}
	return (1);
}

int		read_output(char **store, int ret, int fd, char **line)
{
	if (ret < 0)
		return (-1);
	else if (ret == 0 && (store[fd] == NULL))
	{
		*line = ft_strdup("");
		return (0);
	}
	else
		return (append_line(store, fd, line));
}

int		get_next_line(int fd, char **line)
{
	static char	*store[1024];
	char		buff[BUFFER_SIZE + 1];
	char		*tmp;
	int			ret;

	if (fd < 0 || BUFFER_SIZE < 1 || line == NULL)
		return (-1);
	while ((ret = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		buff[ret] = '\0';
		if (store[fd] == NULL)
			store[fd] = ft_strdup(buff);
		else
		{
			tmp = ft_strjoin(store[fd], buff);
			free(store[fd]);
			store[fd] = tmp;
		}
		if (ft_strchr(buff, '\n') != NULL)
			break ;
	}
	return (read_output(store, ret, fd, line));
}
