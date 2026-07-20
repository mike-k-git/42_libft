#include "libft.h"
#include <stddef.h>

int ft_atoi(const char *nptr) {
  int integer = 0;
  int negative = 0;

  while (*nptr && ft_isspace(*nptr))
    nptr++;
  if (*nptr == '-' || *nptr == '+')
    if (*nptr++ == '-')
      negative = 1;
  while (*nptr && ft_isdigit(*nptr))
    integer = integer * 10 - (*nptr++ - '0');
  if (!negative)
    integer = -integer;
  return (integer);
}
