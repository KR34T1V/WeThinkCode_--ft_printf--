/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 07:39:54 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/25 15:36:59 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_print_lx(unsigned long long n, t_data *d)
{
	char	*new;
	int		i;

	i = 0;
	new = ft_ulltoa_base(n, 16);
	while (new[i] != '\0')
	{
		new[i] = ft_toupper(new[i]);
		i++;
	}
	d->rtn += ft_strlen(new);
	if (new[0] != '0' && d->sharp == 1)
	{
		ft_putstr("0X");
		d->rtn += 2;
	}
	ft_flag_size(ft_strlen(new), d);
	ft_flag_width(d);
	ft_flag_pre(new, d);
	ft_putstr(new);
	ft_flag_width(d);
	free(new);
}
