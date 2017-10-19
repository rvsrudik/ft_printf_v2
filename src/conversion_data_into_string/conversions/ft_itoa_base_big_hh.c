/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llint_to_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrudenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 13:47:10 by vrudenko          #+#    #+#             */
/*   Updated: 2017/01/31 18:30:54 by vrudenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static char	*ft_determ_size(void *nbr, unsigned char *number,
		unsigned char *digs, int base)
{
	int						flag;
	unsigned char			tmpnum;
	char					*tmp;
	int						i;

	i = 0;
	tmpnum = *((unsigned char *)(nbr));
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

char		*ft_itoa_base_big_hh(void *nbr, int base)
{
	unsigned char		number;
	unsigned char		digs;
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
			(*charnbr) += 'A' - '9' - 1;
		charnbr--;
		digs--;
	}
	return (beginnbr);
}
