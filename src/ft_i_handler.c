/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_i_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 18:04:26 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/25 15:32:58 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

static void	ft_char(char num, t_data *d)
{
	ft_print_i(num, d);
}

void		ft_i_handler(va_list list, t_data *d)
{
	ft_check_flags(d);
	if (d->h == 1)
		ft_print_i(va_arg(list, int), d);
	else if (d->h == 2)
		ft_char(va_arg(list, int), d);
	else if (d->l == 1)
		ft_print_i(va_arg(list, long), d);
	else if (d->l == 2)
		ft_print_i(va_arg(list, long long), d);
	else if (d->j == 1)
		ft_print_i(va_arg(list, intmax_t), d);
	else if (d->z == 1)
		ft_print_i(va_arg(list, size_t), d);
	else
		ft_print_i(va_arg(list, int), d);
}
