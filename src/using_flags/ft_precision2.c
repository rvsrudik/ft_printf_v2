/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrudenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 20:14:24 by vrudenko          #+#    #+#             */
/*   Updated: 2017/02/02 20:14:25 by vrudenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_precision_for_x(t_printf *params)
{
	char	*tmp;
	size_t	diff;

	tmp = "";
	if (params->precision >= 0)
		params->flag_zero = 0;
	if (!ft_strcmp(params->str, "0") && !params->precision)
		params->str = ft_strnew(0);
	else
	{
		if (((int)ft_strlen(params->str)) < params->precision)
		{
			diff = params->precision - ft_strlen(params->str);
			tmp = ft_strnew_bchar(diff, '0');
			tmp = ft_strjoin(tmp, params->str);
			params->str = tmp;
		}
	}
}
