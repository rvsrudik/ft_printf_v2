/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrudenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 16:12:20 by vrudenko          #+#    #+#             */
/*   Updated: 2017/02/01 12:15:24 by vrudenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_precision_for_p(t_printf *params)
{
	int		diflen;
	char	*str;
	char	*tmp;

	diflen = params->precision - ft_strlen(params->str) + 2;
	if (diflen <= 0)
		return ;
	tmp = ft_strnew_bchar(diflen, '0');
	str = ft_strjoin("0x", tmp);
	if (tmp)
		free(tmp);
	tmp = ft_strjoin(str, params->str + 2);
	if (str)
		free(str);
	params->str = tmp;
}

static void	ft_precision_for_s(t_printf *params)
{
	char	*tmp;

	if (params->precision == 0)
		params->str = "";
	if (params->precision > 0)
	{
		tmp = ft_strnew_bchar(params->precision, '0');
		tmp = ft_strncpy(tmp, params->str, params->precision);
		params->str = tmp;
	}
}

static void	ft_precision_for_diu(t_printf *params)
{
	int		flag;
	char	*tmp;
	size_t	diff;
	char	*tmp2;
	char	*begin_str;

	if (params->precision >= 0)
		params->flag_zero = 0;
	flag = 0;

	if (!ft_strcmp(params->str, "0") && !params->precision)
	{
		free(params->str);
		params->str = ft_strnew(0);
	}
	else
	{
		begin_str = params->str;
		if (params->str[0] == '-')
		{
			params->str++;
			flag = 1;
		}
		if ((int)(ft_strlen(params->str)) < params->precision)
		{
			diff = params->precision - ft_strlen(params->str);
			tmp = ft_strnew_bchar(diff, '0');
			tmp2 = ft_strjoin(tmp, params->str);
			free(tmp);
				free(begin_str);
			params->str = tmp2;
		}
		if (flag)
			params->str = ft_strjoin("-", params->str);
	}


}

static void	ft_precision_for_o(t_printf *params)
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

void		ft_precision(t_printf *params)
{
	if (params->precision == -1)
		return ;
	if (!ft_strchr("duiDU", params->type))
		params->flag_space = 1;
	if (params->type == 'p')
		ft_precision_for_p(params);
	if (params->type == 's' || params->type == 'S')
		ft_precision_for_s(params);
	if (ft_strchr("DdiUu", params->type))
		ft_precision_for_diu(params);
	if (ft_strchr("oO", params->type))
		ft_precision_for_o(params);
	if (ft_strchr("xX", params->type))
		ft_precision_for_x(params);
}
