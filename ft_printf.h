/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 11:11:54 by mgagne            #+#    #+#             */
/*   Updated: 2022/11/23 11:42:59 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>

int		ft_printf(const char *format, ...);

ssize_t	ft_print_char(int c);
ssize_t	ft_print_str(char *s);
ssize_t	ft_print_decimal(int d);
ssize_t	ft_print_integer(int i);
ssize_t	ft_print_udecimal(int ud);

ssize_t	ft_print_hexa_low(int a);
ssize_t	ft_print_hexa_up(int a);
ssize_t	ft_print_hexa_pointer(void *p);

#endif
