/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrudenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 12:54:48 by vrudenko          #+#    #+#             */
/*   Updated: 2017/01/19 12:54:50 by vrudenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_convert_o(t_printf *params)
{
	params->str_memory_allocated = 1;
	if (params->type == 'O')
	{
		params->type = 'o';
		params->specifier = 'l';
	}
	if (!params->specifier)
		params->str = ft_itoa_base(params->data, 8);
	if (params->specifier == 'h')
		params->str = ft_itoa_base_h(params->data, 8);
	if (params->specifier == 'H')
		params->str = ft_itoa_base_hh(params->data, 8);
	if (params->specifier == 'l')
		params->str = ft_itoa_base_l(params->data, 8);
	if (params->specifier == 'L')
		params->str = ft_itoa_base_ll(params->data, 8);
	if (params->specifier == 'j')
		params->str = ft_itoa_base_j(params->data, 8);
	if (params->specifier == 'z')
		params->str = ft_itoa_base_z(params->data, 8);
}
