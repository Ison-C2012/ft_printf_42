/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putconv_type.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:24:05 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/09 13:40:38 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	putconv_char(char c)
{
	ft_putchar_fd(c, STDOUT);
	return (1);
}

int	putconv_str(char *str)
{
	ft_putstr_fd(str, STDOUT);
	return (ft_strlen(str));
}

int	putconv_ptr(void *ptr)
{
	ft_putstr_fd(str, STDOUT);
	return ();
}

int	putconv_int(int nbr)
{
	ft_putnbr_fd(nbr, STDOUT);
	return (digit_count(nbr) + (nbr < 0));
}

int	putconv_uint(int unbr)
{
	ft_putunbr_fd(unbr, STDOUT);
	return (digit_count(unbr));
}

int	putconv_hex()
{
	ft_putstr_fd(str, STDOUT);
	return (ft_strlen(str));
}
