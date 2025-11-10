/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 19:43:03 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/10 14:23:47 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	count_digit(long long nbr, int base)
{
	size_t	dgt;

	if (nbr == 0)
		return (1);
	if (nbr < 0)
		nbr = -nbr;
	dgt = 0;
	while (nbr)
	{
		dgt++;
		nbr /= base;
	}
	return (dgt);
}

size_t	count_digit_uintptr(unsigned long long nbr, int base)
{
	size_t	dgt;

	if (nbr == 0)
		return (1);
	dgt = 0;
	while (nbr)
	{
		dgt++;
		nbr /= base;
	}
	return (dgt);
}

void	putnbr(long long nbr)
{
	if (nbr < 0)
	{
		ft_putchar_fd('-', STDOUT);
		nbr = -nbr;
	}
	if (nbr < DEC)
	{
		ft_putchar_fd('0' + nbr, STDOUT);
		return ;
	}
	putnbr(nbr / DEC);
	putnbr(nbr % DEC);
}

void	putnbr_hex(unsigned long long nbr, t_ccase lu)
{
	if (nbr < HEX)
	{
		if (nbr < DEC)
			ft_putchar_fd('0' + nbr, STDOUT);
		else
			ft_putchar_fd('a' + (nbr - DEC) + ('A' - 'a') * lu, STDOUT);
		return ;
	}
	putnbr_hex(nbr / HEX, lu);
	putnbr_hex(nbr % HEX, lu);
}
