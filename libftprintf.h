/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewaltz <ewaltz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 12:51:55 by ewaltz            #+#    #+#             */
/*   Updated: 2025/12/02 17:24:48 by ewaltz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdint.h>

int	ft_printf(const char *str, ...);
int	ft_printf_char(va_list *args);
int	ft_printf_string(va_list *args);
int	ft_printf_ptr(va_list *args);
int	ft_printf_decimal(va_list *args);
int	ft_printf_int(va_list *args);
int	ft_printf_hexa_low(va_list *args);
int	ft_printf_hexa_up(va_list *args);
#endif
