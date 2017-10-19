/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_determ_specifier.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrudenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/03 13:59:37 by vrudenko          #+#    #+#             */
/*   Updated: 2017/02/03 13:59:38 by vrudenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_for_norm3(char *specifier[])
{
	specifier[0] = "h";
	specifier[1] = "hh";
	specifier[2] = "l";
	specifier[3] = "ll";
	specifier[4] = "j";
	specifier[5] = "z";
}

void		ft_determ_specifier(t_printf *params)
{
	char	*specifier[6];
	char	tmp;
	int		posit;
	int		i;
	char	arr[6];

	i = 0;
	posit = 0;
	ft_for_norm3(specifier);
	arr[0] = 'h';
	arr[1] = 'H';
	arr[2] = 'l';
	arr[3] = 'L';
	arr[4] = 'j';
	arr[5] = 'z';
	while (i < 6)
	{
		if (ft_strstr(params->flags, specifier[i]))
			tmp = arr[i];
		i++;
	}
	params->specifier = tmp;
}
