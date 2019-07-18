/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lo_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 18:04:26 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/25 15:36:04 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_lo_handler(va_list list, t_data *d)
{
	ft_check_flags(d);
	ft_print_o(va_arg(list, unsigned long), d);
}

/*
**	if(d->h == 1)
**		ft_quit("\nERROR: Invalid Modifier for 'D'");
**	else if (d->l == 1)
**		ft_quit("\nERROR: Invalid Modifier for 'D'");
**	else if (d->l == 2)
**		ft_quit("\nERROR: Invalid Modifier for 'D'");
**	else if (d->j == 1)
**		ft_quit("\nERROR: Invalid Modifier for 'D'");
**	else if (d->z == 1)
**		ft_quit("\nERROR: Invalid Modifier for 'D'");
*/
