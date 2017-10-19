/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrudenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 12:53:13 by vrudenko          #+#    #+#             */
/*   Updated: 2017/01/19 12:53:14 by vrudenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

static int	ft_count_argument(char *format)
{
	int i;
	int	size;

	i = 0;
	size = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '%')
			size++;
		if (format[i] == '%' && format[i + 1] == '%')
			i++;
		i++;
	}
	return (size);
}

int			ft_printf(char *format, ...)
{
	void	**arguments;
	int		size;
	int		i;
	int		syb;
	va_list	ap;

	i = 0;
	g_return_value = 0;
	size = ft_count_argument(format);
	arguments = (void**)malloc(sizeof(void*) * size);
	if (!arguments)
		return (0);
	va_start(ap, format);
	while (size)
	{
		arguments[i] = va_arg(ap, void*);
		size--;
		i++;
	}
	va_end(ap);
	syb = ft_flag_analysis(format, arguments);
	return (syb);
}
