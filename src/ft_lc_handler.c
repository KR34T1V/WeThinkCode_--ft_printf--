/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lc_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 07:27:09 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/25 15:37:15 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_lc_handler(va_list list, t_data *d)
{
	if (d->h == 1)
		return ;
	else if (d->h == 2)
		return ;
	else if (d->l == 2)
		return ;
	else if (d->l == 1)
		return ;
	else if (d->j == 1)
		return ;
	else if (d->z == 1)
		return ;
	else
		ft_print_wchar(va_arg(list, wint_t), d);
}
