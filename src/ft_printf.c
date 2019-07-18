/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 07:59:57 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/25 15:17:14 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int		ft_printf(char *str, ...)
{
	t_data		d;
	va_list		list;

	d.i = 0;
	d.rtn = 0;
	va_start(list, str);
	while (str[d.i] != '\0')
	{
		if (str[d.i] == '%')
		{
			d.i++;
			ft_check_conv(str, list, &d);
		}
		else
			ft_print_loose(str, &d);
	}
	va_end(list);
	return (d.rtn);
}
