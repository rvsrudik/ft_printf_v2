/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrudenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 14:27:34 by vrudenko          #+#    #+#             */
/*   Updated: 2017/01/31 20:01:02 by vrudenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_with_zero_flag(t_printf *params, char *tmp, int diflen)
{
	if (params->flag_zero && params->flag_space)
	{
		params->str[0] = ' ';
		tmp = params->str;
		params->str++;
		while (*params->str != ' ')
			params->str++;
		*params->str = '0';
		params->str = tmp;
	}
	if (params->flag_zero && params->flag_hash)
	{
		params->str[1] = params->str[diflen + 1];
		params->str[diflen + 1] = '0';
	}
	if ((tmp = ft_strchr(params->str, '-')))
	{
		*tmp = '0';
		*ft_strchr(params->str, '0') = '-';
	}
	else if ((tmp = ft_strchr(params->str, '+')))
	{
		*tmp = '0';
		*ft_strchr(params->str, '0') = '+';
	}
}

void		ft_width(t_printf *params)
{
	char	*tmp;
	int		diflen;
	char	*str;

	if (params->flag_minus)
		params->flag_zero = 0;
	diflen = params->width - ft_strlen(params->str);
	if (diflen <= 0 || !params->width)
		return ;
	if (!ft_strcmp(params->str, "")
			&& (params->type == 'c' || params->type == 'C'))
		diflen--;
	if (params->flag_zero)
		tmp = ft_strnew_bchar(diflen, '0');
	else
		tmp = ft_strnew_bchar(diflen, ' ');
	if (params->flag_minus)
		str = ft_strjoin(params->str, tmp);
	else
		str = ft_strjoin(tmp, params->str);
	(tmp) ? free(tmp) : 0;
	(params->str) ? free(params->str) : 0;
	params->str = str;
	if (params->flag_zero)
		ft_with_zero_flag(params, tmp, diflen);
}
