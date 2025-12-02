/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewaltz <ewaltz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:09:30 by ewaltz            #+#    #+#             */
/*   Updated: 2025/12/02 13:43:42 by ewaltz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_router()

int	ft_printf(const char *str, ...)
{
  int	i;

  i = 0;
  while (str[i])
  {
	if (str[i] == '%')
	{
	  if (str[i + 1] == 'c')
		ft_printf_char(????);
	  if (str[i + 1] == 's')
		ft_printf_char(????);
	  if (str[i + 1] == 'p')
		ft_printf_char(????);
	  if (str[i + 1] == 'd')
		ft_printf_char(????);

	}
  }
}
