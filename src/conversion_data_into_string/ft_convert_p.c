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

void	ft_convert_p(t_printf *params)
{
	params->str_memory_allocated = 1;
	params->str = ft_adr_to_str(params->data);
	if (!params->precision && !ft_strcmp(params->str, "0x0"))
	{
		params->str = ft_strnew(2);
		ft_strcpy(params->str, "0x");
	}
}
