/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewaltz <ewaltz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:09:30 by ewaltz            #+#    #+#             */
/*   Updated: 2025/12/02 16:18:08 by ewaltz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libftprintf.h"
#include <unistd.h>
#include <stdarg.h>

int	ft_router(const char spec, va_list *args)
{
  int	count;

  count = 0;
  if (spec == 'c')
	count += ft_printchar(va_list *args);
  if (spec == 's')
	count += ft_printchar(va_list *args);
  if (spec == 'p')
	count += ft_printchar(va_list *args);
  if (spec == 'd')
	count += ft_printchar(va_list *args);
  if (spec == 'i')
	count += ft_printchar(va_list *args);
  if (spec == 'u')
	count += ft_printchar(va_list *args);
  if (spec == 'x')
	count += ft_printchar(va_list *args);
  if (spec == 'X')
	count += ft_printchar(va_list *args);
  return (count);
}

int	ft_printf(const char *str, ...)
{
  int	i;
  int	count;
  va_list args;

  va_start(args, str);
  i = 0;
  count = 0;
  while (str[i])
  {
	if (str[i] == '%' && str[i + 1] != '%')
	{
	  count += ft_router(str[i + 1], &args);
	  i += 2;
	  continue;
	}
	write (1, &str[i], 1);
	i++;
	count++;
  }
  va_end(args);
  return (count)
}


int main()
{
  ft_printf("salut");
}
