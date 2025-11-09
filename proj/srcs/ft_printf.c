/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:25:41 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/09 19:47:36 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	putconv(va_list *ptr_ap, char c)
{
	if (c == 'c')
		return (putconv_char(va_arg(*ptr_ap, int)));
	if (c == 's')
		return (putconv_str(va_arg(*ptr_ap, char *)));
	if (c == 'p')
		return (putconv_ptr(va_arg(*ptr_ap, uintptr_t)));
	if (c == 'd' || c == 'i')
		return (putconv_int(va_arg(*ptr_ap, int)));
	if (c == 'u')
		return (putconv_uint(va_arg(*ptr_ap, unsigned int)));
	if (c == 'x')
		return (putconv_uint_hex(va_arg(*ptr_ap, unsigned int), lower));
	if (c == 'X')
		return (putconv_uint_hex(va_arg(*ptr_ap, unsigned int), upper));
	if (c == '%')
		return (putconv_char('%'));
	return (-1);
}

int	convert_print(va_list *ptr_ap, char *fmt)
{
	int	len;

	len = 0;
	while (fmt[len])
	{
		if (fmt[len] == '%' && ft_strchr(CONV, fmt[len + 1]))
			len += putconv(ptr_ap, fmt[len + 1]);
		else
			ft_putchar_fd(fmt[len], STDOUT);
		len++;
	}
	return (len);
}

int	ft_printf(const char *format, ...)
{
	char	*fmt;
	va_list	ap;
	int		len;

	fmt = (char *)format;
	if (ft_strchr(format, '%') == NULL)
	{
		ft_putstr_fd(fmt, STDOUT);
		return (ft_strlen(fmt));
	}
	va_start(ap, format);
	len = convert_print(&ap, fmt);
	va_end(ap);
	return (len);
}
