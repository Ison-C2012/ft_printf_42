/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_digit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 14:38:36 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/09 14:43:59 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

size_t	count_digit(long long nb)
{
	size_t		dgt;
	long long	nb_abs;

	dgt = 0;
	nb_abs = ABS(nb);
	while (nb_abs)
	{
		dgt++;
		nb_abs /= 10;
	}
	return (dgt);
}
