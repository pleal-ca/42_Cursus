/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleal-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 16:10:34 by pleal-ca          #+#    #+#             */
/*   Updated: 2020/01/25 18:47:12 by pleal-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	s = ((unsigned char *)src);
	d = ((unsigned char *)dst);
	if (dst == src)
		return (dst);
	while (n--)
		*d++ = *s++;
	return (dst);
}
