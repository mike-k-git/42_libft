#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

int ft_swap(void *a, void *b, size_t size) {
  if (!a || !b)
    return 1;
  if (size <= 64) {
    char temp[64];
    ft_memcpy(temp, b, size);
    ft_memcpy(b, a, size);
    ft_memcpy(a, temp, size);
  } else {
    void *temp = malloc(size);
    if (!temp)
      return 1;
    ft_memcpy(temp, b, size);
    ft_memcpy(b, a, size);
    ft_memcpy(a, temp, size);
    free(temp);
  }
  return 0;
}
