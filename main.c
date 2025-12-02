/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewaltz <ewaltz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 12:56:57 by ewaltz            #+#    #+#             */
/*   Updated: 2025/12/02 17:36:58 by ewaltz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int main(void)
{
  printf("====== TEST: [%%c] ======\n");
  char c = 'a';
  // printf("Attendu: "); 
  // printf("%c", c);
  // printf("\n");
  // printf("Resulta: "); 
  ft_printf("%c", c);

}

