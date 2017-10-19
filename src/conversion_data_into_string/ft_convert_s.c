/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrudenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 12:54:48 by vrudenko          #+#    #+#             */
/*   Updated: 2017/01/19 12:54:50 by vrudenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <wchar.h>

static char	*ft_big_str_to_str(void *s)
{
	wchar_t *tmp;
	wchar_t **test;
	char	*str;
	int		i;
	int		k;

	k = 0;
	i = 0;
	test = (wchar_t **)(s);
	tmp = *test;
	if (!tmp)
	{
		str = ft_strnew(6);
		ft_strcpy(str, "(null)");
		return (str);
	}
	while (tmp[i] != '\0')
		i++;
	str = ft_strnew(i);
	while (k < i)
	{
		str[k] = *((char*)tmp);
		tmp++;
		k++;
	}
	return (str);
}

void		ft_convert_s(t_printf *params)
{
	params->str_memory_allocated = 1;
	if (params->type == 'S')
		params->str = ft_big_str_to_str(params->data);
	if (params->type == 's')
		params->str = ft_str_to_str(params->data);
}
