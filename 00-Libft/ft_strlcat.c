/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleal-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 14:42:54 by pleal-ca          #+#    #+#             */
/*   Updated: 2020/01/28 21:45:35 by pleal-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t k;
	size_t l;

	i = ft_strlen(dst);
	j = ft_strlen(src);
	k = 0;
	l = 0;
	if (dstsize <= i)
		return (j + dstsize);
	while (dst[k] != '\0' && k < (dstsize - 1))
		k++;
	while (src[l] != '\0' && k < (dstsize - 1))
	{
		dst[k] = src[l];
		k++;
		l++;
	}
	dst[k] = '\0';
	return (i + j);
}
