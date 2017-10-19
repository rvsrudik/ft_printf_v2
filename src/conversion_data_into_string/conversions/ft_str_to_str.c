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

char	*ft_str_to_str(void *s)
{
	char *tmp;
	char **test;
	char *tmp2;

	test = (char**)(s);
	tmp = *test;
	if (!tmp)
	{
		tmp = ft_strnew(6);
		ft_strcpy(tmp, "(null)");
		return (tmp);
	}
	tmp = ft_strnew(ft_strlen(*test));
	ft_strcpy(tmp, *test);
	return (tmp);
}
