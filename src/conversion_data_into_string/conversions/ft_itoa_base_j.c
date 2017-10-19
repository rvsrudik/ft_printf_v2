/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llint_to_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrudenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 13:47:10 by vrudenko          #+#    #+#             */
/*   Updated: 2017/01/31 18:25:45 by vrudenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static char	*ft_determ_size(void *nbr, uintmax_t *number,
		uintmax_t *digs, int base)
{
	int				flag;
	uintmax_t		tmpnum;
	char			*tmp;
	int				i;

	i = 0;
	tmpnum = *((uintmax_t *)(nbr));
	flag = 0;
	*digs = 0;
	*number = tmpnum;
	while (tmpnum)
	{
		tmpnum /= base;
		(*digs)++;
	}
	tmp = ft_strnew_bchar(*digs, '+');
	return (tmp);
}

char		*ft_itoa_base_j(void *nbr, int base)
{
	uintmax_t			number;
	uintmax_t			digs;
	char				*charnbr;
	char				*beginnbr;

	charnbr = ft_determ_size(nbr, &number, &digs, base);
	if (number == 0)
	{
		charnbr = ft_strnew(1);
		charnbr[0] = '0';
	}
	beginnbr = charnbr;
	while (*charnbr != '\0')
		charnbr++;
	charnbr--;
	while (digs)
	{
		*charnbr = number % base + '0';
		number /= base;
		if (*charnbr > '9')
			(*charnbr) += 'a' - '9' - 1;
		charnbr--;
		digs--;
	}
	return (beginnbr);
}
