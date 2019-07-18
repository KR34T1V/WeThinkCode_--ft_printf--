/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_flag.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 08:23:29 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/25 15:21:43 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_set_flag(char *str, t_data *d)
{
	if (str[d->i] == 'h')
		d->h += 1;
	else if (str[d->i] == 'l')
		d->l += 1;
	else if (str[d->i] == 'j')
		d->j += 1;
	else if (str[d->i] == 'z')
		d->z += 1;
	else if (str[d->i] == '#')
		d->sharp += 1;
	else if (str[d->i] == '0' && !(ft_isdigit(str[d->i - 1])))
		d->zero += 1;
	else if (str[d->i] == '-')
		d->minus += 1;
	else if (str[d->i] == '+')
		d->plus += 1;
	else if (str[d->i] == ' ')
		d->space = 1;
	else if (str[d->i] == '.')
		d->pre += 1;
}
