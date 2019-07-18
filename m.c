/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 08:42:32 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/25 15:05:38 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ft_printf.h"
#include <limits.h>

int		main(void)
{
	int				i = -42;
	unsigned int	ui = 56646654;
	int				mine;
	int				theirs;
	long			l = 654354545;
	unsigned long 	ul =154465469;
	char			c = 'a';
	wint_t			wc = L'¶';
	char			*s = "STRING";
	wchar_t			ws[15] = L"{¶¶¶STRING¶¶¶}";

	//ft_printf("%%%%%20d,%c,%o,%u,%lx,%p,%s,%D,%O,%X,%U,%C%S", l, c, i, i, ul, &c, s, l, l, ul, ul, wc, ws);
	//printf("\n%%%%%20d,%c,%o,%u,%lx,%p,%s,%D,%O,%X,%U,%C%S", l, c, i, i, ul, &c, s, l, l, ul, ul, wc, ws);
	mine  = ft_printf("%o, %ho, %hho", -42, -42, -42);
	ft_putchar('\n');
	theirs = printf("%o, %ho, %hho", -42, -42, -42);
	printf("\n%i\n%i", mine, theirs);
}