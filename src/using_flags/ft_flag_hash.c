/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_hash.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrudenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 17:26:08 by vrudenko          #+#    #+#             */
/*   Updated: 2017/01/30 17:26:48 by vrudenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_flag_hash_for_o(t_printf *params)
{
	while (*params->str == ' ')
		params->str++;
	if (params->str[0] == '0')
		return ;
	params->str = ft_strjoin("0", params->str);
}

static void	ft_flag_hash_for_x(t_printf *params)
{
	char	*add;
	char	*num;
	char	*tmp;
	int		flag;

	flag = 0;
	num = params->str;
	if (params->type == 'x')
		add = "0x";
	if (params->type == 'X')
		add = "0X";
	while (*num == ' ')
		num++;
	while (ft_isdigit(*num))
	{
		if (*num != '0')
			flag = 1;
		num++;
	}
	if (flag)
	{
		tmp = ft_strjoin(add, params->str);
		free(params->str);
		params->str = tmp;
	}
}

void		ft_flag_hash(t_printf *params)
{
	if (!params->flag_hash)
		return ;
	if (params->type == 'o' || params->type == 'O')
		ft_flag_hash_for_o(params);
	if (params->type == 'x' || params->type == 'X')
		ft_flag_hash_for_x(params);
}
