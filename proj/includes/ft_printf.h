/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:18:10 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/09 19:38:19 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "libft.h"

# include <stdarg.h>
# include <stdint.h>

# define STDOUT 1
# define CONV "cspdiuxX%"
# define OCT 8
# define DEC 10
# define HEX 16
# define ABS(nb) ((nb > 0) * nb - (nb < 0) * nb)

typedef enum
{
	lower,
	upper
} charcase;

int		ft_printf(const char *format, ...);
int		putconv_char(char c);
int		putconv_str(char *str);
int		putconv_int(int nbr);
int		putconv_uint(unsigned int unbr);
int		putconv_ptr(uintptr_t ptr);
int		putconv_uint_hex(int unbr, charcase lu);
size_t	count_digit(long long nbr, int base);
void	ft_putnbr(long long nbr);
void	ft_putnbr_hex(long long nbr, charcase lu);

#endif
