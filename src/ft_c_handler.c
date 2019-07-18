/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 07:03:35 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/25 15:42:02 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_c_handler(va_list list, t_data *d)
{
	if (d->h == 1)
		return ;
	else if (d->h == 2)
		return ;
	else if (d->l == 2)
		return ;
	else if (d->j == 1)
		return ;
	else if (d->z == 1)
		return ;
	ft_check_flags(d);
	if (d->l == 1)
		ft_print_wchar(va_arg(list, wint_t), d);
	else
		ft_print_c(va_arg(list, int), d);
}

/*
**	if(d->h == 1)
**		ft_quit("\nERROR: Invalid Modifier for 'c'");
**	else if (d->h == 2)
**		ft_quit("\nERROR: Invalid Modifier for 'c'");
**	else if (d->l == 2)
**		ft_quit("\nERROR: Invalid Modifier for 'c'");
**	else if (d->j == 1)
**		ft_quit("\nERROR: Invalid Modifier for 'c'");
**	else if (d->z == 1)
**		ft_quit("\nERROR: Invalid Modifier for 'c'");
*/
