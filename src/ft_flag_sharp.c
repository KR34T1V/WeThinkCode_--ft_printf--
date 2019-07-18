/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_sharp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 13:59:00 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/25 15:40:43 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_flag_sharp(char *str, t_data *d)
{
	if (d->conv == 'o' && str[0] != '0' && d->sharp == 1)
	{
		ft_putchar('0');
		d->rtn++;
	}
	else if (d->conv == 'x' && str[0] != '0' && d->sharp == 1)
		ft_putstr("0x");
	else if (d->conv == 'X' && str[0] != '0' && d->sharp == 1)
		ft_putstr("0X");
	if ((d->conv == 'X' || d->conv == 'x') && str[0] != '0' &&
		d->sharp == 1)
		d->rtn += 2;
}
