/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleal-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 21:39:38 by pleal-ca          #+#    #+#             */
/*   Updated: 2020/02/28 20:41:53 by pleal-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*str;

	str = 0;
	len = ft_strlen(s) + 1;
	while (len > 0)
	{
		if (*s == c)
			str = (char *)s;
		s++;
		len--;
	}
	return (str);
}
