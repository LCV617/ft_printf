/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewaltz <ewaltz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:52:30 by ewaltz            #+#    #+#             */
/*   Updated: 2025/12/03 18:15:52 by ewaltz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// int	ft_int_len_unsigned(unsigned int nbr)
// {
//   unsigned int count;
//
//   count = 0;
//   while (nbr > 0)
//   {
// 	nbr /= 10;
// 	count++;
//   }
//   return (count);
// }

void	ft_putnbr_base(unsigned long nbr)
{
  char	c;
  char *base = "0123456789abcdef";

  c = 'x';
  if (nbr >= 16)
  {
	ft_putnbr_base(nbr / 16);
	ft_putnbr_base(nbr % 16);
  }
  else
  {
	c = base[nbr];
	write(1, &c, 1);
  }
}
#include <stdio.h>

int	ft_printf_ptr(va_list *args)
{
  void	*ptr;
  ptr = va_arg(*args, void*);
  unsigned long addr = (unsigned long) ptr;


  write (1, "0x", 2);
  ft_putnbr_base(addr);
  // printf("%p\n", ptr);
  // printf("%p", &ptr);

  return (0);

}
