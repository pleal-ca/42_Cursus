/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleal-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 18:42:46 by pleal-ca          #+#    #+#             */
/*   Updated: 2020/01/25 20:29:45 by pleal-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (src < dst)
		while (len--)
			*((unsigned char *)(dst + len)) = *((unsigned char *)(src + len));
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
