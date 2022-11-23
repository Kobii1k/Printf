/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:16:54 by mgagne            #+#    #+#             */
/*   Updated: 2022/11/23 19:21:33 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

ssize_t	ft_print_hexa(int n, char *base)
{
	long	nb;
	ssize_t	len;

	len = 0;
	nb = n;
	if (nb < 0)
	{
		nb *= -1;
		len += write(1, "-", 1);
	}
	if (nb >= 16)
	{
		len += ft_print_hexa((int)(nb / 16), base);
		len += ft_print_hexa((int)(nb % 16), base);
	}
	else
		len += ft_print_char(base[nb]);
	return (len);
}
