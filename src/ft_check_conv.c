/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_conv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 08:09:43 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/25 15:21:07 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

static void	ft_handl_conv2(va_list list, t_data *d)
{
	if (d->conv == 'C')
		ft_lc_handler(list, d);
	else if (d->conv == 'S')
		ft_ls_handler(list, d);
}

static void	ft_handl_conv(va_list list, t_data *d)
{
	if (d->conv == 'i' || d->conv == 'd')
		ft_i_handler(list, d);
	else if (d->conv == 'D')
		ft_ld_handler(list, d);
	else if (d->conv == 'c')
		ft_c_handler(list, d);
	else if (d->conv == 'o')
		ft_o_handler(list, d);
	else if (d->conv == 'O')
		ft_lo_handler(list, d);
	else if (d->conv == 'u')
		ft_u_handler(list, d);
	else if (d->conv == 'U')
		ft_lu_handler(list, d);
	else if (d->conv == 'x')
		ft_x_handler(list, d);
	else if (d->conv == 'X')
		ft_lx_handler(list, d);
	else if (d->conv == 'p')
		ft_p_handler(list, d);
	else if (d->conv == 's')
		ft_s_handler(list, d);
	else if (d->conv == '%')
		ft_print_sign(d);
	ft_handl_conv2(list, d);
}

void		ft_check_conv(char *str, va_list list, t_data *d)
{
	ft_rset_flag(d);
	while (str[d->i] != '\0' && !(ft_iscfound(VALID, str[d->i])))
	{
		if (ft_iscfound(FLAGS, str[d->i]))
			ft_set_flag(str, d);
		else if (d->fw < ft_atoi(&str[d->i]) && (str[d->i - 1] == '0' ||
			!(ft_isdigit(str[d->i - 1]))) && str[d->i - 1] != '.')
			d->fw = ft_atoi(&str[d->i]);
		else if (str[d->i - 1] == '.')
			d->pw = ft_atoi(&str[d->i]);
		d->i++;
	}
	if (ft_iscfound(VALID, str[d->i]))
	{
		d->conv = str[d->i++];
		ft_handl_conv(list, d);
	}
	else
		return ;
}
/*
**	ft_quit("\nERROR: Invalid Conversion Operator");
**	printf("\nrtn = %i\ni|%i| h|%i| l|%i| j|%i| z|%i| #|%i| 0|%i|
**	-|%i| +|%i| sp|%i| fw|%i| pre|%i| pw|%i| conv|%c|\n",d->rtn, d->i,
**	d->h, d->l, d->j, d->z, d->sharp, d->zero, d->minus, d->plus, d->space,
**	d->fw, d->pre, d->pw, d->conv);
**	fflush(stdout);
*/
