/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 12:30:18 by mgagne            #+#    #+#             */
/*   Updated: 2022/11/23 15:01:03 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;

	nb = nbr;
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb >= 16)
	{
		ft_putnbr_base((int)(nb / 16), base);
		ft_putnbr_base((int)(nb % 16), base);
	}
	else
		ft_putchar(base[nb]);
}
