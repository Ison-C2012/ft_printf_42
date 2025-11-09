/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 19:43:03 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/10 01:08:16 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

size_t	count_digit(long long nbr, int base)
{
	size_t		dgt;
	long long	abs;

	if (nbr == 0)
		return (1);
	dgt = 0;
	abs = ABS(nbr);
	while (abs)
	{
		dgt++;
		abs /= base;
	}
	return (dgt);
}

void	putunbr(unsigned int nbr)
{
	if (nbr < DEC)
	{
		ft_putchar_fd('0' + nbr, STDOUT);
		return ;
	}
	putunbr(nbr / DEC);
	putunbr(nbr % DEC);
}

void	putunbr_hex(uintptr_t nbr, charcase lu)
{
	if (nbr < HEX)
	{
		if (nbr < DEC)
			ft_putchar_fd('0' + nbr, STDOUT);
		else
			ft_putchar_fd('a' + (nbr - DEC) + ('A' - 'a') * lu, STDOUT);
		return ;
	}
	putunbr_hex(nbr / HEX, lu);
	putunbr_hex(nbr % HEX, lu);
}
