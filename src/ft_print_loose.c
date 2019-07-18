/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_loose.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 13:28:17 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/25 15:27:15 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_print_loose(char *str, t_data *d)
{
	while (str[d->i] != '%' && str[d->i] != '\0')
	{
		ft_putchar(str[d->i]);
		d->i++;
		d->rtn++;
	}
}
