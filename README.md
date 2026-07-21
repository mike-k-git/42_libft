[![CI](https://github.com/mike-k-git/42_libft/actions/workflows/ci.yml/badge.svg)](https://github.com/mike-k-git/42_libft/actions/workflows/ci.yml)

_This project has been created as part of the 42 curriculum by mkugan._

# LIBFT

## Description

A custom C standard library implementation built for learning purposes.
This project recreates common libc functions and introduces basic data structures like linked lists.

### Purpose

- Understand low-level C programming
- Reimplement standard library functions
- Practice memory management and data structures
- Build a reusable utility library for future C projects

#### String and Memory

- ft_strlen, ft_strdup, ft_strjoin, ft_strtrim, ft_substr
- ft_memset, ft_memcpy, ft_memmove, ft_memcmp, ft_memchr
- ft_split, ft_strnstr, ft_strlcpy, ft_strlcat, ft_strtolower

#### Character checks and Conversion

- ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint, ft_isspace
- ft_tolower, ft_toupper
- ft_atoi, ft_itoa, ft_ultoa_base, ft_atol

#### Output functions

- ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd, ft_putnchar_fd

#### Memory allocation

- ft_calloc, ft_bzero, ft_free_array, ft_swap

#### Linked list

- ft_lstnew, ft_lstadd_front, ft_lstadd_back
- ft_lstsize, ft_lstlast
- ft_lstdelone, ft_lstclear
- ft_lstiter, ft_lstmap

## Instructions

Compile the library:

```bash
make
```

Clean object files:

```bash
make clean
```

Remove all generated files:

```bash
make fclean
```

Rebuild:

```bash
make re
```

Test:

```bash
make test
```

### Output

Static library: `libft.a`

Object files stored in `obj/`

### Usage

Include the header and link the library:

```C
#include "libft.h"
```

Compile with:

```bash
cc main.c -L. -lft
```

## Testing

The library is tested with a differential harness ([greatest.h](https://github.com/silentbicycle/greatest/)) that compares each covered function against its `libc` equivalent under `AddressSanitizer` and `UndefinedBehaviorSanitizer`.

## CI

Continuous integration runs the test suite on GitHub Actions against both `gcc` and `clang` on every push and pull request to the `main` branch.
