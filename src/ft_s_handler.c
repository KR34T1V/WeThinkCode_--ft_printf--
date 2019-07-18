/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 07:03:35 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/25 15:35:30 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_s_handler(va_list list, t_data *d)
{
	ft_check_flags(d);
	if (d->l == 1)
		ft_print_ls(va_arg(list, wchar_t *), d);
	else
		ft_print_s(va_arg(list, char *), d);
}
/*
**	if(d->h == 1)
**		ft_quit("\nERROR: Invalid Modifier for 's'");
**	else if (d->h == 2)
**		ft_quit("\nERROR: Invalid Modifier for 's'");
**	else if (d->l == 2)
**		ft_quit("\nERROR: Invalid Modifier for 's'");
**	else if (d->j == 1)
**		ft_quit("\nERROR: Invalid Modifier for 's'");
**	else if (d->z == 1)
**		ft_quit("\nERROR: Invalid Modifier for 's'");
*/
