/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llint_to_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrudenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 13:47:10 by vrudenko          #+#    #+#             */
/*   Updated: 2017/01/31 18:48:15 by vrudenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static char	*ft_determ_size(void *nbr, unsigned long int *number,
		unsigned long int *digs)
{
	unsigned long int	tmpnum;
	char				*tmp;
	int					i;

	i = 0;
	tmpnum = *((unsigned long int *)(nbr));
	*digs = 1;
	*number = tmpnum;
	while (tmpnum >= 10)
	{
		tmpnum /= 10;
		(*digs)++;
	}
	tmp = ft_strnew_bchar(*digs, '+');
	return (tmp);
}

static void	ft_convert_num(char *charnbr, unsigned long int digs,
		unsigned long int number)
{
	unsigned long int	div;
	unsigned long int	tmpdigs;

	div = 1;
	tmpdigs = digs;
	while (digs > 1)
	{
		div *= 10;
		digs--;
	}
	digs = tmpdigs;
	while (digs)
	{
		*charnbr = number / div % 10 + '0';
		div /= 10;
		digs--;
		charnbr++;
	}
}

char		*ft_uitoa_l(void *nbr)
{
	unsigned long int	number;
	unsigned long int	digs;
	char				*charnbr;
	char				*beginnbr;

	charnbr = ft_determ_size(nbr, &number, &digs);
	beginnbr = charnbr;
	ft_convert_num(charnbr, digs, number);
	return (beginnbr);
}
