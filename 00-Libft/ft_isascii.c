/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleal-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 19:31:25 by pleal-ca          #+#    #+#             */
/*   Updated: 2020/01/24 19:32:27 by pleal-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isascii(int c)
{
	if (c < 0 || c > 127)
		return (0);
	else
		return (1);
}
