/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 19:43:03 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/09 14:37:43 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putunbr_fd(unsigned int un, int fd)
{
	if (un < 10)
	{
		ft_putchar_fd('0' + un, fd);
		return ;
	}
	ft_putunbr_fd(un / 10, fd);
	ft_putunbr_fd(un % 10, fd);
}
