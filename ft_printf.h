/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 11:11:54 by mgagne            #+#    #+#             */
/*   Updated: 2022/11/23 14:52:26 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);

ssize_t	ft_print_char(int c);
ssize_t	ft_print_str(char *s);
ssize_t	ft_print_int(int i);
ssize_t	ft_print_uint(int ui);
ssize_t	ft_print_hexa(int a, char *base);
ssize_t	ft_print_hexa_pointer(void *p);

char	*ft_itoa(int n);
size_t	ft_strlen(const char *s);

#endif
