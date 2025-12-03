/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewaltz <ewaltz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:52:31 by ewaltz            #+#    #+#             */
/*   Updated: 2025/12/03 13:21:40 by ewaltz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_string(va_list *args)
{
  int	i;
  char	*str;

  i = 0;
  str = va_arg(*args, char *);
  while (str[i])
  {
	write(1, &str[i], 1);
	i++;
  }
  return (i);
}
