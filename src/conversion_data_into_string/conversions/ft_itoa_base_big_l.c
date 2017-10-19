/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llint_to_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrudenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 13:47:10 by vrudenko          #+#    #+#             */
/*   Updated: 2017/01/31 18:32:14 by vrudenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static char	*ft_determ_size(void *nbr, unsigned long long int *number,
		unsigned long long int *digs, int base)
{
	int						flag;
	unsigned long long int	tmpnum;
	char					*tmp;
	int						i;

	i = 0;
	tmpnum = *((unsigned long long int *)(nbr));
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

char		*ft_itoa_base_big_l(void *nbr, int base)
{
	unsigned long long int	number;
	unsigned long long int	digs;
	char					*charnbr;
	char					*beginnbr;

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
