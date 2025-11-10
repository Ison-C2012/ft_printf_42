/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:18:10 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/10 14:24:05 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"

# include <stdarg.h>
# include <stdint.h>

# define STDOUT 1
# define CONV "cspdiuxX%"
# define OCT 8
# define DEC 10
# define HEX 16

typedef enum s_ccase
{
	lower,
	upper
}	t_ccase;

int		ft_printf(const char *format, ...);
int		putconv_char(char c);
int		putconv_str(char *str);
int		putconv_int(int nbr);
int		putconv_uint(unsigned int unbr);
int		putconv_ptr(uintptr_t ptr);
int		putconv_uint_hex(unsigned int unbr, t_ccase lu);
size_t	count_digit(long long nbr, int base);
size_t	count_digit_uintptr(unsigned long long nbr, int base);
void	putnbr(long long nbr);
void	putnbr_hex(unsigned long long nbr, t_ccase lu);

#endif
