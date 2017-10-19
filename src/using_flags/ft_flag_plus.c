/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_plus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrudenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 13:58:19 by vrudenko          #+#    #+#             */
/*   Updated: 2017/01/19 13:59:48 by vrudenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_flag_plus(t_printf *params)
{
	char	*tmp;
	char	*tmp2;
	char	*num;

	num = params->str;
	if (!params->flag_plus)
		return ;
	if (params->type != 'i' && params->type != 'd' && params->type != 'D')
		return ;
	if (num[0] != '-')
	{
		tmp = ft_strtrim(params->str);
		tmp2 = ft_strjoin("+", tmp);
		free(tmp);
		free(params->str);
		params->str = tmp2;
		ft_width(params);
	}
}
