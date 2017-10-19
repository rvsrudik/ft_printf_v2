/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrudenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 13:11:25 by vrudenko          #+#    #+#             */
/*   Updated: 2016/11/28 16:04:28 by vrudenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_atoi_l(const char *str)
{
	long int	i;
	long int	nb;
	long int	ten;
	long int	asciizero;
	long int	test;

	asciizero = 48;
	ten = 10;
	nb = 0;
	i = 0;
	while (str[i] != '\0')
	{
		test = (long int)str[i];
		nb = nb * ten + (str[i] - asciizero);
		i++;
	}
	return (nb);
}
