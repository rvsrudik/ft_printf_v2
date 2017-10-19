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

static char	*ft_determ_size(void *nbr, intmax_t *number, intmax_t *digs)
{
	int			flag;
	intmax_t	tmpnum;
	char		*tmp;
	int			i;

	i = 0;
	tmpnum = *((intmax_t *)(nbr));
	flag = 0;
	*digs = 1;
	if (tmpnum < 0)
	{
		tmpnum *= -1;
		flag = 1;
	}
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

static void	ft_convert_num(char *charnbr, intmax_t digs, intmax_t number)
{
	intmax_t div;
	intmax_t tmpdigs;

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

char		*ft_itoa_j(void *nbr)
{
	intmax_t	number;
	intmax_t	digs;
	char		*charnbr;
	char		*beginnbr;

	charnbr = ft_determ_size(nbr, &number, &digs);
	beginnbr = charnbr;
	if (charnbr[0] == '-')
		charnbr++;
	ft_convert_num(charnbr, digs, number);
	if (!ft_strcmp(beginnbr, "-("))
	{
		free(beginnbr);
		beginnbr = ft_strnew(20);
		ft_strcpy(beginnbr, "-9223372036854775808");
		return ("-9223372036854775808");
	}
	return (beginnbr);
}
