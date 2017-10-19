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

void		ft_precision_for_x(t_printf *params)
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

char		*ft_prec_norm_one(char *tmp, char *param_str, char *begin_str)
{
	char	*tmp3;

	tmp3 = ft_strjoin(tmp, param_str);
	free(tmp);
	free(begin_str);
	return (tmp3);
}

void		ft_prec_norm_two(t_printf *params, int *flag)
{
	params->str++;
	*flag = 1;
}

void		ft_prec_norm_three(t_printf *params)
{
	free(params->str);
	params->str = ft_strnew(0);
}

int			flag_anal_norm_one(void **begin_argumenst,
			char *begin_tmp, t_printf *params)
{
	int to_print;

	to_print = ft_strlen(g_toprint);
	free(begin_argumenst);
	free(begin_tmp);
	free(params);
	free(g_toprint);
	return (to_print);
}
