/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewaltz <ewaltz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:52:30 by ewaltz            #+#    #+#             */
/*   Updated: 2025/12/04 10:24:39 by ewaltz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long nbr)
{
  char	c;
  int	count;
  char *base = "0123456789abcdef";

  count = 0;
  c = 'x';
  if (nbr >= 16)
  {
	count += ft_putnbr_base(nbr / 16);
	count += ft_putnbr_base(nbr % 16);
  }
  else
  {
	c = base[nbr];
	count += write (1, &c, 1);
  }
  return (count);
}

int	ft_printf_ptr(va_list *args)
{
  void	*ptr;
  int	count;

  count = 0;
  ptr = va_arg(*args, void*);
  unsigned long addr = (unsigned long) ptr;


  count += write (1, "0x", 2);
  count += ft_putnbr_base(addr);

  return (count);

}
