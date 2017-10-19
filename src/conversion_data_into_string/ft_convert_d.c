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

void	ft_convert_d(t_printf *params)
{
	params->str_memory_allocated = 1;
	if (params->type == 'i')
		params->type = 'd';
	if (params->type == 'D')
	{
		params->type = 'd';
		params->specifier = 'l';
	}
	if (!params->specifier)
		params->str = ft_itoa_d(params->data);
	if (params->specifier == 'h')
		params->str = ft_itoa_h(params->data);
	if (params->specifier == 'H')
		params->str = ft_itoa_hh(params->data);
	if (params->specifier == 'l')
		params->str = ft_itoa_l(params->data);
	if (params->specifier == 'L')
		params->str = ft_itoa_ll(params->data);
	if (params->specifier == 'j')
		params->str = ft_itoa_j(params->data);
	if (params->specifier == 'z')
		params->str = ft_itoa_z(params->data);
}
