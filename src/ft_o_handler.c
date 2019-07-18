/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_o_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 07:37:14 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/25 15:42:19 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

static void	ft_short(unsigned short num, t_data *d)
{
	ft_print_o(num, d);
}

static void	ft_char(unsigned char num, t_data *d)
{
	ft_print_o(num, d);
}

void		ft_o_handler(va_list list, t_data *d)
{
	ft_check_flags(d);
	if (d->h == 1)
		ft_short(va_arg(list, unsigned int), d);
	else if (d->h == 2)
		ft_char(va_arg(list, unsigned int), d);
	else if (d->l == 1)
		ft_print_o(va_arg(list, unsigned long), d);
	else if (d->l == 2)
		ft_print_o(va_arg(list, unsigned long long), d);
	else if (d->j == 1)
		ft_print_o(va_arg(list, uintmax_t), d);
	else if (d->z == 1)
		ft_print_o(va_arg(list, size_t), d);
	else
		ft_print_o(va_arg(list, unsigned int), d);
}
