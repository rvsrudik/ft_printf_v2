/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reset_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrudenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 12:54:48 by vrudenko          #+#    #+#             */
/*   Updated: 2017/01/19 12:54:50 by vrudenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_reset_params(t_printf *params)
{
	params->data = NULL;
	params->type = 0;
	params->specifier = 0;
	params->flag_hash = 0;
	params->flag_minus = 0;
	params->flag_plus = 0;
	params->flag_zero = 0;
	params->flag_space = 0;
	params->width = 0;
	params->precision = -1;
	params->str = NULL;
	params->flags = NULL;
}
