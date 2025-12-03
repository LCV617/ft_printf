/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewaltz <ewaltz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 12:56:57 by ewaltz            #+#    #+#             */
/*   Updated: 2025/12/03 14:14:17 by ewaltz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
  // printf("====== TEST: [%%c] ======\n");
  // char c = 'b';
  // // printf("Attendu: "); 
  // // printf("%c", c);
  // // printf("\n");
  // // printf("Resulta: "); 
  // ft_printf("%c", c);

  // printf("====== TEST: [%%s] ======\n");
  // char *s = "salut";
  // // printf("Attendu: "); 
  // printf("%c", c);
  // // printf("\n");
  // // printf("Resulta: "); 
  // ft_printf("%s", s);

  // printf("====== TEST: [%%p] ======\n");
  // int x = 42;
  // // printf("Attendu: "); 
  // // printf("%c", c);
  // // printf("\n");
  // // printf("Resulta: "); 
  // ft_printf("%p", &x);

  printf("====== TEST: [%%i] ======\n");
  int x = 654691;
  // printf("Attendu: "); 
  // printf("%c", c);
  // printf("\n");
  // printf("Resulta: "); 
  ft_printf("%i", x);

}

