/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 22:43:28 by mkugan            #+#    #+#             */
/*   Updated: 2025/07/13 22:43:29 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int ft_get_digit(int c, size_t base) {
  const char *digits;
  size_t i;

  digits = "0123456789abcdef";
  i = 0;
  while (i < base) {
    if (digits[i] == c)
      return (i);
    i++;
  }
  return (-1);
}

long ft_atol(char *n, char **end, size_t base) {
  long integer;
  long current;
  int negative;

  current = -1;
  if (!n || base < 2 || base > 16)
    return (0);
  integer = 0;
  negative = 0;
  while (*n && ft_isspace(*n)) {
    n++;
    if (end)
      (*end)++;
  }
  if (*n && (*n == '-' || *n == '+')) {
    if (*n == '-')
      negative = 1;
    n++;
    if (end)
      (*end)++;
  }
  if (base == 16 && n[0] == '0' && ft_tolower(n[1]) == 'x') {
    if (end)
      (*end) += 2;
    n += 2;
  }
  while (*n) {
    current = ft_get_digit(ft_tolower(*n++), base);
    if (end)
      (*end)++;
    if (current == -1)
      break;
    integer = integer * base + current;
    if (integer <= 0 && negative)
      return (LONG_MIN);
    if (integer <= 0 && !negative)
      return (LONG_MAX);
  }
  if (negative)
    integer = -integer;
  return (integer);
}
