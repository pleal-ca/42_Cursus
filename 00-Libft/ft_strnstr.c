/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleal-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 20:10:09 by pleal-ca          #+#    #+#             */
/*   Updated: 2020/02/11 21:06:20 by pleal-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	k;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		k = 0;
		while (haystack[i + k] != '\0' && haystack[i + k] == needle[k] &&
				(i + k) < len)
		{
			if (needle[k + 1] == '\0')
				return ((char *)&haystack[i]);
			k++;
		}
		i++;
	}
	return (0);
}
