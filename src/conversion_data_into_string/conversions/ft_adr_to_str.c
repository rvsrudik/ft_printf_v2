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

char	*ft_adr_to_str(void *adr)
{
	long int	a;
	char		*address;
	char		*tmp;

	a = *((long int*)adr);
	address = ft_itoa_base_l(&a, 16);
	tmp = ft_strjoin("0x", address);
	if (address)
		free(address);
	address = tmp;
	return (address);
}
