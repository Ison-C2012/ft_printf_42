/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putconv_chars.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 19:05:07 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/09 19:47:51 by keitotak         ###   ########.fr       */
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
