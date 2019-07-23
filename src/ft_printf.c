/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@students.wethinkcode    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 07:59:57 by cterblan          #+#    #+#             */
/*   Updated: 2019/07/23 21:55:32 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"
#include "../inc/ft_printf.h"
#include "../inc/export_ft_printf.h"

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
