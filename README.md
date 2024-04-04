# LIBFT

## Introduction

LIBFT is a comprehensive library of functions, inspired by the standard C library, designed to assist with various common and additional tasks in C programming. This project aims to reimplement a subset of the C standard library functions along with some extra utility functions that can be helpful in various scenarios. The library is written strictly following specific technical considerations to ensure efficiency, standard compliance, and modularity.

## Technical Considerations

- No global variables are allowed.
- Helper functions should be declared as static to limit their scope to the file.
- All files are placed at the root of the repository.
- Only relevant files are included; unused files are forbidden.
- All `.c` files must compile with the flags `-Wall -Wextra -Werror`.
- The `ar` command is used to create the library; `libtool` is not allowed.
- The `libft.a` library is created at the root of the repository.

The first part of the library focuses on reimplementing a set of functions from the libc. These functions mimic the originals' prototypes and behaviors but are prefixed with `ft_` to denote their custom implementation. Functions implemented include but are not limited to `ft_isalpha`, `ft_isdigit`, `ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_strlcpy`, `ft_toupper`, `ft_tolower`, `ft_strchr`, `ft_strncmp`, `ft_atoi`, `ft_calloc`, and `ft_strdup`.
In addition to the libc functions, this library includes a variety of utility functions not found in the libc or that are present in a different form. These functions provide additional functionality, such as `ft_substr` for creating substrings, `ft_strjoin` for concatenating strings, `ft_strtrim` for trimming strings based on a set of characters, `ft_split` for splitting strings into arrays of strings, `ft_itoa` for integer to ASCII conversion, `ft_strmapi` for applying functions to string characters, and `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` for outputting data to file descriptors.

### Prerequisites

- A C compiler (gcc or clang)
- Basic knowledge of C programming and Unix environments

### Building the Library

To build the LIBFT library, follow these steps:

**1. Clone the repository:**
git clone https://github.com/Beata12/libft.git

**2. Navigate to the library directory:****
cd libft

**3. Compile the library:**
make
This will create a libft.a file at the root of the repository, which you can link to your C projects.

**4. Usage**
To use LIBFT in your projects, include the library's header file in your C files:
#include "libft.h"
