/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_pre.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 10:59:52 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/25 15:39:56 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_flag_pre(char *str, t_data *d)
{
	char	c;

	c = d->conv;
	if (str[0] != '0' && d->pw < 0 && d->sharp == 1 && (c == 'o' || c == 'O'))
	{
		ft_putchar('0');
		d->rtn++;
	}
	if (c == 'i' || c == 'd' || c == 'x' || c == 'X' || c == 'o' || c == 'O' ||
			c == 'p' || c == 'u')
		while (d->pw > 0)
		{
			ft_putchar('0');
			d->pw--;
			d->rtn++;
		}
}
