/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putconv_nbrs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:24:05 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/10 01:08:39 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	putconv_int(int nbr)
{
	ft_putnbr_fd(nbr, STDOUT);
	return (count_digit(nbr, DEC) + (nbr < 0));
}

int	putconv_uint(unsigned int unbr)
{
	putunbr(unbr);
	return (count_digit(unbr, DEC));
}

int	putconv_ptr(uintptr_t ptr)
{
	ft_putstr_fd("0x", STDOUT);
	putunbr_hex(ptr, lower);
	return (count_digit(ptr, HEX) + 2);
}

int	putconv_uint_hex(int unbr, charcase lu)
{
	putunbr_hex(unbr, lu);
	return (count_digit(unbr, HEX));
}
