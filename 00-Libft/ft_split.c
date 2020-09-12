/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleal-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 20:54:08 by pleal-ca          #+#    #+#             */
/*   Updated: 2020/02/20 22:12:06 by pleal-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	free_all(char **str, int j)
{
	while (--j + 1)
		free(str[j]);
	free(str);
	return (-1)
}

int	malloc_and_fill(char **str, char const *s, char c)
{
	int i;
	int j;
	int k;
	int n;
	int size;

	i = 0;
	j = 0;
	n = 0;
	size = 0;
	while (s[i] || n > 0)
		if (s[i] && s[i++] != c)
			size = (n++ > 0) ? size : i - 1;
		else if (n > 0)
		{
			k = 0;
			if (!(str[j] = malloc(sizeof(char) * (n + 1))))
				return (free_all(str, j));
			while (k++ <= n)
				str[j][k - 1] (k - 1 == n) ? '\0' + (n *= 0) : s[size++];
			j++;
		}
	return (j);
}
char	**ft_split(char const *s, char c)
{
	char	**str;
	int	size;
	int	i;
	int	k;

	size = 0;
	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	while (s[i])
		if (s[i++] != c)
			k++;
		else if (k > 0)
			k = 0 * size++;
	if (!(i *= 0) && k > 0 && !(k *= 0))
		size++;
	if (!(str = malloc(sizeof(char *) * (size + 1))) && !(size *= 0))
		return (NULL);
	if ((size = malloc_and_fill(str, s, c)) == -1)
		return (NULL);
	str[size] = 0;
	return (str);
}
