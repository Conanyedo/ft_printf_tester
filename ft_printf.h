/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 14:15:19 by ybouddou          #+#    #+#             */
/*   Updated: 2019/12/29 03:54:46 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct	s_flags
{
	int		flag;
	int		p;
	int		w;
	char	c;
}				t_flag;

int				ft_printf(const char *str, ...);
int				print(const char **s);
void			substr(char const *s, unsigned int start, size_t len);
void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_atoi(const char *s);
void			ft_itoa(int n);
void			ft_itoa_unsigned(unsigned int n);
char			*ft_strdup(const char *s1);
size_t			ft_strlen(const char *s);

int				dui_checker(const char **str, va_list arg, t_flag flags);
int				cs_checker(const char **str, va_list arg, t_flag flags);
int				px_checker(const char **str, va_list arg, t_flag flags);

int				di_printf(int i, t_flag fl);
int				ft_minus_width(int i, int d, t_flag fl);
int				ft_digit(int i, int d, t_flag fl);
int				ft_prec(int i, int d, int minus, t_flag fl);

int				s_printf(char *s, t_flag fl);
int				neg_p(char *s, int len, t_flag fl);
int				neg_w(char *s, int len, t_flag fl);
int				s_spaces(char *s, int len, t_flag fl);
int				ft_len(char *s, int len, t_flag fl);

int				c_printf(unsigned int i, t_flag fl);

int				u_printf(unsigned int i, t_flag fl);
int				neg_u_w(unsigned int i, int d, t_flag fl);
int				u_neg_precision(int i, int d, t_flag fl);

int				x_printf(char *s, t_flag fl);
char			*converter(unsigned int n, char x);
int				ft_len_x(char *s, int len, t_flag fl);
int				ft_prec_x(char *s, int len, t_flag fl);

int				p_printf(char *s, t_flag fl);
char			*p_converter(unsigned long int n);
int				ft_len_p(char *s, int len, t_flag fl);

#endif
