/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleal-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 22:20:13 by pleal-ca          #+#    #+#             */
/*   Updated: 2020/02/28 18:49:18 by pleal-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*new;
	size_t	len;

	if (!s)
		return (NULL);
	len = ft_strlen((char *)s);
	new = malloc(sizeof(char) * (len + 1));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
