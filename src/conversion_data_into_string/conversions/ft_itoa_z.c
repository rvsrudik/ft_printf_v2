/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llint_to_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrudenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 13:47:10 by vrudenko          #+#    #+#             */
/*   Updated: 2017/01/20 13:47:11 by vrudenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static char	*ft_determ_size(void *nbr, size_t *number, size_t *digs)
{
	int			flag;
	size_t		tmpnum;
	char		*tmp;
	int			i;

	i = 0;
	tmpnum = *((size_t *)(nbr));
	flag = 0;
	*digs = 1;
	*number = tmpnum;
	while (tmpnum >= 10)
	{
		tmpnum /= 10;
		(*digs)++;
	}
	tmp = ft_strnew_bchar(flag + *digs, '+');
	if (flag)
		tmp[0] = '-';
	return (tmp);
}

static void	ft_convert_num(char *charnbr, size_t digs, size_t number)
{
	size_t div;
	size_t tmpdigs;

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

char		*ft_itoa_z(void *nbr)
{
	size_t		number;
	size_t		digs;
	char		*charnbr;
	char		*beginnbr;
	intmax_t	check;

	check = *((intmax_t *)(nbr));
	charnbr = ft_determ_size(nbr, &number, &digs);
	beginnbr = charnbr;
	if (charnbr[0] == '-')
		charnbr++;
	ft_convert_num(charnbr, digs, number);
	check = *((intmax_t *)(nbr));
	if (check < 0)
		beginnbr = ft_strjoin("-", beginnbr);
	return (beginnbr);
}
