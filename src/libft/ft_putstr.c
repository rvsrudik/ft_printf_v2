/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrudenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 10:46:34 by vrudenko          #+#    #+#             */
/*   Updated: 2016/11/30 15:06:16 by vrudenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putstr(char const *str)
{
	int		i;

	i = 0;
	if (!str)
		return ;
	while (str[i] != '\0')
		i++;
	write(1, str, i);
}
