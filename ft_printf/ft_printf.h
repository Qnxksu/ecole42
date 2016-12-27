/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprevot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/26 08:02:26 by mprevot           #+#    #+#             */
/*   Updated: 2016/12/26 09:26:24 by mprevot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H


# include <stdarg.h>
# include "libft/libft.h"

# define SIZE_HH 1
# define SIZE_H 2
# define SIZE_L 3
# define SIZE_LL 4
# define SIZE_J 5
# define SIZE_Z 6


typedef struct 	s_args
{
	char		hash;
	char		zero;
	char		plus;
	char		minus;
	char		space;
	int			width;
	int			precision;
	char		lenght;
	char	 	type;
	int			nbr;
	
}				t_args;

int     		ft_printf(const char *format, ...);
void			ft_printf_putnbr_hexa_min(int nbr, t_args a);
void			ft_printf_putnbr_hexa_maj(int nbr, t_args a);
void			ft_printf_putnbr_octal(int nbr, t_args a);
void			ft_printf_putnbr_unsigned(unsigned int nbr, t_args a);
void			ft_printf_putnbr_pointer(int *nbr, t_args a);
void			ft_printf_putstr(const char *str, t_args a);
void			ft_printf_wputstr(wchar_t *str, t_args a);
void			ft_printf_synonyms(t_args *a);
int				ft_recursive_printf(const char *str, va_list ap);
int	 			ft_printf_flags(const char *str, t_args *a);
int				ft_printf_width(const char *str, t_args *a);
int				ft_printf_precision(const char *str, t_args *a);
int				ft_printf_lenght(const char *str, t_args *a);
t_args			ft_printf_readarg(const char *str);
void			ft_printf_putchar(char c, t_args a);
void			ft_printf_putnbr_signed(int nbr, t_args a);
#endif