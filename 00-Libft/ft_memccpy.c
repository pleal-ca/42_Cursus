/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleal-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 18:24:35 by pleal-ca          #+#    #+#             */
/*   Updated: 2020/01/25 18:40:43 by pleal-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = ((unsigned char *)dst);
	s = ((unsigned char *)src);
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		if (d[i] == (unsigned char)c)
			return ((void *)(dst + i + 1));
		i++;
	}
	return (NULL);
}
