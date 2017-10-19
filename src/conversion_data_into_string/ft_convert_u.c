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

void	ft_convert_u(t_printf *params)
{
	params->str_memory_allocated = 1;
	if (params->type == 'U')
	{
		params->type = 'u';
		params->specifier = 'l';
	}
	if (!params->specifier)
		params->str = ft_uitoa(params->data);
	if (params->specifier == 'h')
		params->str = ft_uitoa_h(params->data);
	if (params->specifier == 'H')
		params->str = ft_uitoa_hh(params->data);
	if (params->specifier == 'l')
		params->str = ft_uitoa_l(params->data);
	if (params->specifier == 'L')
		params->str = ft_uitoa_ll(params->data);
	if (params->specifier == 'j')
		params->str = ft_uitoa_j(params->data);
	if (params->specifier == 'z')
		params->str = ft_uitoa_z(params->data);
}
