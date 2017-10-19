/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_determ_precision.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrudenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 19:24:24 by vrudenko          #+#    #+#             */
/*   Updated: 2017/01/31 19:24:32 by vrudenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	chars(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i--;
	return (i);
}

static char	*ft_strstr_back(char *str, char *to_find)
{
	char	*a;
	int		i;
	int		k;

	i = chars(str);
	k = 0;
	while (i >= 0)
	{
		if (str[i] == to_find[0])
		{
			a = &str[i];
			while (*a == to_find[k] || to_find[k] == '\0')
			{
				if (to_find[k] == '\0')
					return (&str[i]);
				a--;
				k++;
			}
			k = 0;
		}
		i--;
	}
	return (0);
}

void		ft_determ_precision(t_printf *params)
{
	char	*str;
	int		i;
	char	*prec;

	i = 0;
	if (!(str = ft_strstr_back(params->flags, ".")))
	{
		params->precision = -1;
		return ;
	}
	str++;
	while (ft_isdigit(str[i]) && str[i] != '\0')
		i++;
	prec = ft_strnew_bchar(i, '?');
	prec = ft_strncpy(prec, str, i);
	params->precision = ft_atoi(prec);
	if (prec)
		free(prec);
}
