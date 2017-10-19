/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrudenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 11:00:47 by vrudenko          #+#    #+#             */
/*   Updated: 2016/12/01 17:47:24 by vrudenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_nullchar(t_printf *params)
{
	int		i;
	char	*add;

	i = 1;
	if (!params->width)
	{
		write(1, "\0", 1);
		return ;
	}
	if (params->flag_zero)
		add = ft_strnew_bchar((params->width - 1), '0');
	else if (!params->flag_zero)
		add = ft_strnew_bchar((params->width - 1), ' ');
	if (params->flag_minus)
	{
		write(1, "\0", 1);
		ft_putstr(add);
	}
	else if (!params->flag_minus)
	{
		ft_putstr(add);
		write(1, "\0", 1);
	}
	g_return_value += params->width - 1;
	params->width = 0;
}

char		*ft_char_to_str(t_printf *params)
{
	char	c;
	char	*tmp;

	c = *((char *)(params->data));
	tmp = ft_strnew(1);
	tmp[1] = '\0';
	tmp[0] = c;
	if (tmp[0] == 0)
	{
		tmp = ft_strnew(0);
		ft_nullchar(params);
		g_return_value++;
	}
	return (tmp);
}
