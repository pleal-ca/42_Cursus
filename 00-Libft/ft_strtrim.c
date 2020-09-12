/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleal-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 19:45:11 by pleal-ca          #+#    #+#             */
/*   Updated: 2020/04/26 18:23:17 by pleal-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	k;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	k = 0;
	while (s1[k] && ft_strchr(set, s1[k]))
		k++;
	i = ft_strlen(s1);
	if (k == i)
		return (ft_strdup(""));
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(&s1[k], 0, i + 1 - k));
}
