/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 10:16:06 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/25 15:38:52 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_flag_size(size_t strlen, t_data *d)
{
	char		c;

	c = d->conv;
	d->pw -= strlen;
	d->fw -= strlen;
	if (d->space == 1 && d->plus == 0 && (c == 'i' || c == 'd'))
		d->fw--;
	if (d->plus != 0 && (c == 'i' || c == 'd'))
		d->fw--;
	if (d->pre == 1 && d->pw > 0 && (c == 'i' || c == 'd' || c == 'x' || c ==
		'X' || c == 'o' || c == 'O' || c == 'p' || c == 'u'))
		d->fw -= d->pw;
	if (d->sharp == 1 && (c == 'o' || c == 'O') && d->pw <= 0)
		d->fw--;
	else if (d->sharp == 1 && (c == 'x' || c == 'X'))
		d->fw -= 2;
}
