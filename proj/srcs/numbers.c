/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 19:43:03 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/09 19:47:46 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

size_t	count_digit(long long nbr, int base)
{
	size_t		dgt;
	long long	abs;

	dgt = 0;
	abs = ABS(nbr);
	while (abs)
	{
		dgt++;
		abs /= base;
	}
	return (dgt);
}

void	ft_putnbr(long long nbr)
{
	long long	abs;

	if (nbr < 0)
		ft_putchar_fd('-', STDOUT);
	abs = ABS(nbr);
	if (abs < DEC)
	{
		ft_putchar_fd('0' + abs, STDOUT);
		return ;
	}
	ft_putnbr(abs / DEC);
	ft_putnbr(abs % DEC);
}

void	ft_putnbr_hex(long long nbr, charcase lu)
{
	long long	abs;

	if (nbr < 0)
		ft_putchar_fd('-', STDOUT);
	abs = ABS(nbr);
	if (abs < HEX)
	{
		if (abs < DEC)
			ft_putchar_fd('0' + abs, STDOUT);
		else
			ft_putchar_fd('a' + (abs - DEC) + ('A' - 'a') * lu, STDOUT);
		return ;
	}
	ft_putnbr_hex(abs / HEX, lu);
	ft_putnbr_hex(abs % HEX, lu);
}
