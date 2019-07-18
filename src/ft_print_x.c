/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 07:39:54 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/25 15:30:30 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_print_x(unsigned long long n, t_data *d)
{
	char	*new;

	new = ft_ulltoa_base(n, 16);
	ft_flag_size(ft_strlen(new), d);
	ft_flag_width(d);
	d->rtn += ft_strlen(new);
	if (new[0] != '0' && d->sharp == 1)
	{
		ft_putstr("0x");
		d->rtn += 2;
	}
	ft_putstr(new);
	ft_flag_width(d);
	free(new);
}
