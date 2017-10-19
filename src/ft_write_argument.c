/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_argumenth                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrudenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 12:54:48 by vrudenko          #+#    #+#             */
/*   Updated: 2017/01/31 19:07:02 by vrudenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_determ_width(t_printf *params)
{
	char	*flags;
	char	*tmp;
	char	*tmp2;
	int		i;

	i = 0;
	flags = params->flags;
	while (*flags == '#' || *flags == '0' || *flags == '-'
			|| *flags == '+' || *flags == ' ')
		flags++;
	tmp = flags;
	while (ft_isdigit(tmp[i]))
		i++;
	if (i)
	{
		tmp2 = ft_strnew_bchar(i, '?');
		tmp2 = ft_strncpy(tmp2, tmp, i);
		params->width = ft_atoi(tmp2);
		if (tmp2)
			free(tmp2);
	}
}

static void	ft_determ_flags(t_printf *params)
{
	char	*flags;

	flags = params->flags;
	while (*flags != '\0')
	{
		if (*flags == '#')
			params->flag_hash = 1;
		if (*flags == '-')
			params->flag_minus = 1;
		if (*flags == '+')
			params->flag_plus = 1;
		if (*flags == ' ')
			params->flag_space = 1;
		if (*flags == '0')
		{
			if (flags == params->flags)
				params->flag_zero = 1;
			else if (!ft_isdigit(*(flags - 1)))
				params->flag_zero = 1;
		}
		flags++;
	}
}

void		ft_write_argument(t_printf *params)
{
	char	*tmp;

	tmp = NULL;
	if (!params->flags)
		return ;
	ft_determ_flags(params);
	ft_determ_width(params);
	ft_determ_precision(params);
	ft_determ_specifier(params);
	ft_convert_argument(params);
	ft_use_flags(params);
	if (params->str)
	{
		tmp = ft_strjoin(g_toprint, params->str);
		if (g_toprint)
			free(g_toprint);
		g_toprint = tmp;
		tmp = NULL;
	}
	ft_putstr(params->str);
	if (params->str_memory_allocated)
		free(params->str);
	if (params->flags)
		free(params->flags);
	ft_reset_params(params);
}
