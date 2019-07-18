/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rset_flag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 07:56:23 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/25 15:21:34 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_rset_flag(t_data *d)
{
	d->conv = 0;
	d->h = 0;
	d->l = 0;
	d->j = 0;
	d->z = 0;
	d->sharp = 0;
	d->zero = 0;
	d->minus = 0;
	d->plus = 0;
	d->space = 0;
	d->fw = 0;
	d->pre = 0;
	d->pw = 0;
}
