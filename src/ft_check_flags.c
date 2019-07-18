/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 13:59:54 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/25 15:22:44 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void		ft_check_flags(t_data *d)
{
	if (d->h > 2 || d->l > 2 || d->j > 1 || d->z > 1 || d->sharp > 1 ||
			d->zero > 1 || d->minus > 1 || d->plus > 1 || d->pre > 1)
		ft_quit("\nERROR: Reoccuring Flags");
	else if (d->h > 0 && (d->l > 0 || d->j > 0 || d->z > 0))
		ft_quit("\nERROR: Conflicting Flags");
	else if ((d->l > 0) && (d->h > 0 || d->j > 0 || d->z > 0))
		ft_quit("\nERROR: Conflicting Flags");
	else if (d->j > 0 && (d->l > 0 || d->h > 0 || d->z > 0))
		ft_quit("\nERROR: Conflicting Flags");
	else if (d->z > 0 && (d->l > 0 || d->j > 0 || d->h > 0))
		ft_quit("\nERROR: Conflicting Flags");
}
