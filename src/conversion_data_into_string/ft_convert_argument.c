/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_argument.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrudenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 12:54:48 by vrudenko          #+#    #+#             */
/*   Updated: 2017/01/19 12:54:50 by vrudenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_convert_argument(t_printf *params)
{
	params->str_memory_allocated = 0;
	if (params->type == '%')
		ft_convert_percent(params);
	if (params->type == 'd' || params->type == 'D' || params->type == 'i')
		ft_convert_d(params);
	if (params->type == 'o' || params->type == 'O')
		ft_convert_o(params);
	if (params->type == 'u' || params->type == 'U')
		ft_convert_u(params);
	if (params->type == 'x' || params->type == 'X')
		ft_convert_x(params);
	if (params->type == 'c' || params->type == 'C')
		ft_convert_c(params);
	if (params->type == 's' || params->type == 'S')
		ft_convert_s(params);
	if (params->type == 'p')
		ft_convert_p(params);
}
