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

static void	ft_base_lovercase(t_printf *params)
{
	if (!params->specifier)
		params->str = ft_itoa_base(params->data, 16);
	if (params->specifier == 'h')
		params->str = ft_itoa_base_h(params->data, 16);
	if (params->specifier == 'H')
		params->str = ft_itoa_base_hh(params->data, 16);
	if (params->specifier == 'l')
		params->str = ft_itoa_base_l(params->data, 16);
	if (params->specifier == 'L')
		params->str = ft_itoa_base_ll(params->data, 16);
	if (params->specifier == 'j')
		params->str = ft_itoa_base_j(params->data, 16);
	if (params->specifier == 'z')
		params->str = ft_itoa_base_z(params->data, 16);
}

static void	ft_base_uppercase(t_printf *params)
{
	if (!params->specifier)
		params->str = ft_itoa_base_big(params->data, 16);
	if (params->specifier == 'h')
		params->str = ft_itoa_base_big_h(params->data, 16);
	if (params->specifier == 'H')
		params->str = ft_itoa_base_big_hh(params->data, 16);
	if (params->specifier == 'l')
		params->str = ft_itoa_base_big_l(params->data, 16);
	if (params->specifier == 'L')
		params->str = ft_itoa_base_big_ll(params->data, 16);
	if (params->specifier == 'j')
		params->str = ft_itoa_base_big_j(params->data, 16);
	if (params->specifier == 'z')
		params->str = ft_itoa_base_big_z(params->data, 16);
}

void		ft_convert_x(t_printf *params)
{
	params->str_memory_allocated = 1;
	if (params->type == 'x')
	{
		ft_base_lovercase(params);
	}
	else if (params->type == 'X')
	{
		ft_base_uppercase(params);
	}
}
