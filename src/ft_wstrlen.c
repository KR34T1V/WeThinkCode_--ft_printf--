/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 11:52:11 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/25 15:27:00 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

size_t	ft_wstrlen(wchar_t *ws)
{
	int		i;
	size_t	rtn;

	i = 0;
	rtn = 0;
	while (ws[i++] != '\0')
	{
		if (ws[i] >= 0 && ws[i] <= 127)
			rtn += 1;
		else if (ws[i] >= 128 && ws[i] <= 2047)
			rtn += 2;
		else if (ws[i] >= 2048 && ws[i] <= 65535)
			rtn += 3;
		else if (ws[i] >= 65536 && ws[i] <= 1114111)
			rtn += 4;
	}
	return (rtn);
}
