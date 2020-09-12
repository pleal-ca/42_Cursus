/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleal-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 19:23:02 by pleal-ca          #+#    #+#             */
/*   Updated: 2020/01/24 20:03:25 by pleal-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isalpha(int c)
{
	if ((c < 48 || c > 57) && (c < 65 || c > 90) && (c < 97 || c > 122))
		return (0);
	else
		return (1);
}

static int	ft_isdigit(int c)
{
	if (c < 48 || c > 57)
		return (0);
	else
		return (1);
}

int			ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
		return (1);
	else
		return (0);
}
