/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleal-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 14:53:07 by pleal-ca          #+#    #+#             */
/*   Updated: 2020/02/28 18:34:16 by pleal-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long	i;
	long	k;
	long	signal;

	i = 0;
	k = 0;
	signal = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal *= -1;
		i++;
	}
	if (ft_isdigit(str[i]))
	{
		while (ft_isdigit(str[i]))
		{
			k = (k * 10) + (str[i] - '0');
			i++;
		}
	}
	return (k * signal);
}
