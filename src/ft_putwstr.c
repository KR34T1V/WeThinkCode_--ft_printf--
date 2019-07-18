/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 08:28:41 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/25 15:26:51 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int		ft_putwstr(wchar_t *ws)
{
	int		rtn;
	int		i;

	rtn = 0;
	i = 0;
	while (ws[i] != '\0')
	{
		rtn += ft_putwchar(ws[i++]);
	}
	return (rtn);
}
