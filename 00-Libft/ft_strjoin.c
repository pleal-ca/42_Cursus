/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleal-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 19:13:16 by pleal-ca          #+#    #+#             */
/*   Updated: 2020/02/14 21:00:29 by pleal-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		k;
	char	*new;

	i = -1;
	k = 0;
	if (!(new = (char*)malloc((ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	while (s1[++i])
		new[i] = s1[i];
	while (s2[k])
	{
		new[i] = s2[k];
		i++;
		k++;
	}
	new[i] = '\0';
	return (new);
}
