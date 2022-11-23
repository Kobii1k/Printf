/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:16:54 by mgagne            #+#    #+#             */
/*   Updated: 2022/11/23 16:42:51 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

size_t	ft_hexa_len(int n)
{
	size_t	len;

	len = 0;
	while (n > 16)
	{
		n = n / 16;
		len++;
	}
	if (n > 0)
		len++;
	return (len);
}

ssize_t	ft_print_hexa(int n, char *base)
{
	size_t	len;
	char	*s;

	len = ft_hexa_len(n);
	//bzero
	s = malloc(sizeof(char) * (len + 1));

}
