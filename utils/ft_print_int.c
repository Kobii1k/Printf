/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 11:42:39 by mgagne            #+#    #+#             */
/*   Updated: 2022/11/23 15:00:27 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

ssize_t	ft_print_int(int n)
{
	char	*str;
	ssize_t	len;

	str = ft_itoa(n);
	len = write(1, &str, ft_strlen(str));
	free(str);
	return (len);
}
