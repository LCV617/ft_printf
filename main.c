/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewaltz <ewaltz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 12:12:37 by ewaltz            #+#    #+#             */
/*   Updated: 2025/12/06 12:21:24 by ewaltz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// #include <stdio.h>
// #include <limits.h>
// #include "ft_printf.h"
//
// int main(void)
// {
//     int ret_std;
//     int ret_ft;
//
//     char            c = 'A';
//     char            c_zero = '\0';
//     char            *s = "Hello, world";
//     char            *s_empty = "";
//     char            *s_long =
//         "This is a long string used to stress-test ft_printf. "
//         "0123456789 ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//     char            *s_null = NULL;
//
//     int             d_neg = -42;
//     int             d_zero = 0;
//     int             d_one = 1;
//     int             d_min = INT_MIN;
//     int             d_max = INT_MAX;
//
//     unsigned int    u_zero = 0u;
//     unsigned int    u_one = 1u;
//     unsigned int    u_max = UINT_MAX;
//
//     unsigned int    hx_small = 0x0u;
//     unsigned int    hx_mid = 0x42u;
//     unsigned int    hx_big = 0xABCDEFu;
//
//     void            *p_valid = (void *)s;
//     void            *p_null = NULL;
//
//     /* %c simple */
//     printf("\n==== TEST 01: %%c simple ====\n");
//     printf("[printf]   -> ");
//     ret_std = printf("T01: [%c]\n", c);
//     printf("[ft_printf]-> ");
//     ret_ft = ft_printf("T01: [%c]\n", c);
//     printf("ret printf = %d | ret ft_printf = %d\n", ret_std, ret_ft);
//
//     /* %c avec '\0' (test du comptage) */
//     printf("\n==== TEST 02: %%c avec '\\0' ====\n");
//     printf("[printf]   -> ");
//     ret_std = printf("T02: before[%c]after\n", c_zero);
//     printf("[ft_printf]-> ");
//     ret_ft = ft_printf("T02: before[%c]after\n", c_zero);
//     printf("ret printf = %d | ret ft_printf = %d\n", ret_std, ret_ft);
//
//     /* %s basique */
//     printf("\n==== TEST 03: %%s basique ====\n");
//     printf("[printf]   -> ");
//     ret_std = printf("T03: [%s]\n", s);
//     printf("[ft_printf]-> ");
//     ret_ft = ft_printf("T03: [%s]\n", s);
//     printf("ret printf = %d | ret ft_printf = %d\n", ret_std, ret_ft);
//
//     /* %s chaîne vide */
//     printf("\n==== TEST 04: %%s chaîne vide ====\n");
//     printf("[printf]   -> ");
//     ret_std = printf("T04: [%s]\n", s_empty);
//     printf("[ft_printf]-> ");
//     ret_ft = ft_printf("T04: [%s]\n", s_empty);
//     printf("ret printf = %d | ret ft_printf = %d\n", ret_std, ret_ft);
//
//     /* %s longue */
//     printf("\n==== TEST 05: %%s longue ====\n");
//     printf("[printf]   -> ");
//     ret_std = printf("T05: [%s]\n", s_long);
//     printf("[ft_printf]-> ");
//     ret_ft = ft_printf("T05: [%s]\n", s_long);
//     printf("ret printf = %d | ret ft_printf = %d\n", ret_std, ret_ft);
//
//     /* %s NULL (comportement attendu: (null)) */
//     printf("\n==== TEST 06: %%s NULL ====\n");
//     printf("[printf]   -> ");
//     ret_std = printf("T06: [%s]\n", s_null);
//     printf("[ft_printf]-> ");
//     ret_ft = ft_printf("T06: [%s]\n", s_null);
//     printf("ret printf = %d | ret ft_printf = %d\n", ret_std, ret_ft);
//
//     /* %p pointeur valide */
//     printf("\n==== TEST 07: %%p pointeur valide ====\n");
//     printf("[printf]   -> ");
//     ret_std = printf("T07: [%p]\n", p_valid);
//     printf("[ft_printf]-> ");
//     ret_ft = ft_printf("T07: [%p]\n", p_valid);
//     printf("ret printf = %d | ret ft_printf = %d\n", ret_std, ret_ft);
//
//     /* %p NULL */
//     printf("\n==== TEST 08: %%p NULL ====\n");
//     printf("[printf]   -> ");
//     ret_std = printf("T08: [%p]\n", p_null);
//     printf("[ft_printf]-> ");
//     ret_ft = ft_printf("T08: [%p]\n", p_null);
//     printf("ret printf = %d | ret ft_printf = %d\n", ret_std, ret_ft);
//
//     /* %d / %i basiques */
//     printf("\n==== TEST 09: %%d / %%i basiques ====\n");
//     printf("[printf]   -> ");
//     ret_std = printf("T09: d_neg=[%d] d_zero=[%d] d_one=[%i]\n",
//                      d_neg, d_zero, d_one);
//     printf("[ft_printf]-> ");
//     ret_ft = ft_printf("T09: d_neg=[%d] d_zero=[%d] d_one=[%i]\n",
//                        d_neg, d_zero, d_one);
//     printf("ret printf = %d | ret ft_printf = %d\n", ret_std, ret_ft);
//
//     /* %d / %i INT_MIN / INT_MAX (overflow piégeux) */
//     printf("\n==== TEST 10: %%d / %%i INT_MIN / INT_MAX ====\n");
//     printf("[printf]   -> ");
//     ret_std = printf("T10: min=[%d] max=[%d]\n", d_min, d_max);
//     printf("[ft_printf]-> ");
//     ret_ft = ft_printf("T10: min=[%d] max=[%d]\n", d_min, d_max);
//     printf("ret printf = %d | ret ft_printf = %d\n", ret_std, ret_ft);
//
//     /* %u basiques + UINT_MAX */
//     printf("\n==== TEST 11: %%u basiques ====\n");
//     printf("[printf]   -> ");
//     ret_std = printf("T11: zero=[%u] one=[%u] max=[%u]\n",
//                      u_zero, u_one, u_max);
//     printf("[ft_printf]-> ");
//     ret_ft = ft_printf("T11: zero=[%u] one=[%u] max=[%u]\n",
//                        u_zero, u_one, u_max);
//     printf("ret printf = %d | ret ft_printf = %d\n", ret_std, ret_ft);
//
//     /* %x / %X */
//     printf("\n==== TEST 12: %%x / %%X ====\n");
//     printf("[printf]   -> ");
//     ret_std = printf("T12: small=[%x] mid=[%x] big=[%X]\n",
//                      hx_small, hx_mid, hx_big);
//     printf("[ft_printf]-> ");
//     ret_ft = ft_printf("T12: small=[%x] mid=[%x] big=[%X]\n",
//                        hx_small, hx_mid, hx_big);
//     printf("ret printf = %d | ret ft_printf = %d\n", ret_std, ret_ft);
//
//     /* %% et combinaisons de % */
//     printf("\n==== TEST 13: %%%% et combinaisons ====\n");
//     printf("[printf]   -> ");
//     ret_std = printf("T13: simple %% test\n");
//     printf("[ft_printf]-> ");
//     ret_ft = ft_printf("T13: simple %% test\n");
//     printf("ret printf = %d | ret ft_printf = %d\n", ret_std, ret_ft);
//
//     printf("[printf]   -> ");
//     ret_std = printf("T13b: %%%% between %% two %% percents\n");
//     printf("[ft_printf]-> ");
//     ret_ft = ft_printf("T13b: %%%% between %% two %% percents\n");
//     printf("ret printf = %d | ret ft_printf = %d\n", ret_std, ret_ft);
//
//     /* mélange de tout */
//     printf("\n==== TEST 14: mélange de tout ====\n");
//     printf("[printf]   -> ");
//     ret_std = printf("T14: c=[%c] s=[%s] p=[%p] d=[%d] i=[%i] u=[%u] "
//                      "x=[%x] X=[%X] %%=[%%]\n",
//                      c, s, p_valid, d_neg, d_max, u_max, hx_mid, hx_big);
//     printf("[ft_printf]-> ");
//     ret_ft = ft_printf("T14: c=[%c] s=[%s] p=[%p] d=[%d] i=[%i] u=[%u] "
//                        "x=[%x] X=[%X] %%=[%%]\n",
//                        c, s, p_valid, d_neg, d_max, u_max, hx_mid, hx_big);
//     printf("ret printf = %d | ret ft_printf = %d\n", ret_std, ret_ft);
//
//     /* texte simple sans conversion (sanity check) */
//     printf("\n==== TEST 15: texte simple, sans conversion ====\n");
//     printf("[printf]   -> ");
//     ret_std = printf("T15: plain text line.\n");
//     printf("[ft_printf]-> ");
//     ret_ft = ft_printf("T15: plain text line.\n");
//     printf("ret printf = %d | ret ft_printf = %d\n", ret_std, ret_ft);
//
//     return 0;
// }
