/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_sign.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 07:13:08 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/25 15:30:20 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_print_sign(t_data *d)
{
	ft_flag_size(1, d);
	ft_flag_width(d);
	ft_putchar('%');
	ft_flag_width(d);
	d->rtn += 1;
}
