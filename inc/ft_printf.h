/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 07:48:29 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/25 15:46:25 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../lib/libft/inc/libft.h"
# include <stdarg.h>
# include <inttypes.h>
# include <wchar.h>

# define FLAGS "hljz#0-+ ."
# define VALID "cCdDioOpsSuUxX\%"

typedef struct	s_data
{
	int			i;
	int			rtn;
	char		conv;
	int			h;
	int			l;
	int			j;
	int			z;
	int			sharp;
	int			zero;
	int			minus;
	int			plus;
	int			space;
	int			fw;
	int			pre;
	int			pw;
}				t_data;

int				ft_printf(char *str, ...);

void			ft_quit(char *str);
void			ft_check_conv(char *str, va_list list, t_data *d);
void			ft_rset_flag(t_data *d);
void			ft_set_flag(char *str, t_data *d);
void			ft_check_flags(t_data *d);
char			*ft_lltoa_flag(intmax_t n);
char			*ft_ulltoa_base(uintmax_t n, int base);
int				ft_putwchar(wint_t wc);
int				ft_putwstr(wchar_t *ws);
size_t			ft_wstrlen(wchar_t *ws);

void			ft_print_loose(char *str, t_data *d);
void			ft_i_handler(va_list list, t_data *d);
void			ft_print_i(intmax_t n, t_data *d);
void			ft_c_handler(va_list list, t_data *d);
void			ft_print_c(int	c, t_data *d);
void			ft_o_handler(va_list list, t_data *d);
void			ft_print_o(unsigned long long n, t_data *d);
void			ft_u_handler(va_list list, t_data *d);
void			ft_print_u(unsigned long long n, t_data *d);
void			ft_x_handler(va_list list, t_data *d);
void			ft_print_x(unsigned long long n, t_data *d);
void			ft_p_handler(va_list list, t_data *d);
void			ft_print_p(void *addr, t_data *d);
void			ft_s_handler(va_list list, t_data *d);
void			ft_print_s(char *str, t_data *d);
void			ft_ld_handler(va_list list, t_data *d);
void			ft_lo_handler(va_list list, t_data *d);
void			ft_lu_handler(va_list list, t_data *d);
void			ft_lx_handler(va_list list, t_data *d);
void			ft_print_lx(unsigned long long n, t_data *d);
void			ft_print_sign(t_data *d);
void			ft_lc_handler(va_list list, t_data *d);
void			ft_print_wchar(wint_t wc, t_data *d);
void			ft_ls_handler(va_list list, t_data *d);
void			ft_print_ls(wchar_t *ws, t_data *d);

void			ft_flag_size(size_t strlen, t_data *d);
void			ft_flag_width(t_data *d);
void			ft_flag_pre(char *str, t_data *d);
void			ft_flag_plus(t_data *d);
void			ft_flag_sharp(char	*str, t_data *d);
void			ft_flag_space(t_data *d);

#endif
