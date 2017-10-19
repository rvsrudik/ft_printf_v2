/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_space.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrudenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 14:17:38 by vrudenko          #+#    #+#             */
/*   Updated: 2017/01/19 14:18:31 by vrudenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_flag_space(t_printf *params)
{
	char	*tmp;
	char	*tmp2;
	int		i;

	i = 0;
	if (params->precision > 0 && !ft_strchr("duiDU", params->type))
		params->flag_space = 0;
	if (!params->flag_space || params->flag_plus)
		return ;
	if (params->type != 'i' && params->type != 'd' && params->type != 'D')
		return ;
	if (params->str[0] != '-' && params->str[0] != '+')
	{
		tmp = ft_strtrim(params->str);
		tmp2 = ft_strjoin(" ", tmp);
		free(params->str);
		free(tmp);
		params->str = tmp2;
		ft_width(params);
	}
}
