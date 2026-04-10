*This project has been created as part of the 42 curriculum by hugo-mar.*

# Libft

## Description

**Libft** is the first core project of the 42 curriculum. Its goal is to rebuild a personal C library from scratch by reimplementing a selection of standard C library functions and by creating additional utility functions that will be reused in future projects.

This project is designed to strengthen the fundamentals of low-level programming in C, including:

- pointer manipulation
- memory handling
- string processing
- dynamic allocation
- data structure design
- code organization in modular source files
- compiling and archiving code into a static library

The final result is a static library named `libft.a` containing a collection of general-purpose functions. These functions are intended to serve as a reusable toolbox throughout the rest of the curriculum.

According to the project subject, the library must be written in C, compiled with `-Wall -Wextra -Werror`, archived with `ar`, and delivered with a `Makefile`, a header file, and all source files at the root of the repository.

---

## Project Goals

The main objectives of this project are:

- to understand how common libc functions work internally
- to reimplement them without relying on the original implementations
- to write safe and reusable C code
- to handle memory allocation carefully and avoid leaks
- to build a personal foundation library for future 42 projects

This project is not only about reproducing existing behaviour, but also about learning how C works under the hood through practice. The subject explicitly presents Libft as a foundational project that helps students understand standard functions by implementing them themselves.

---

## Detailed Library Description

The library created for this project is a **custom static C library** that groups together several categories of utility functions.

### 1. Libc Reimplementations

The first part of the library consists of reimplementations of classic libc functions. These functions keep the expected behaviour of the originals, but use the `ft_` prefix.

Included functions:

- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_strlen`
- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_toupper`
- `ft_tolower`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_memchr`
- `ft_memcmp`
- `ft_strnstr`
- `ft_atoi`
- `ft_calloc`
- `ft_strdup`

These functions cover character classification, memory operations, string traversal, comparisons, searches, conversions, and allocation utilities. They form the low-level base of the library. The subject also specifies that these functions must match the behaviour of the originals and must not rely on external functions, except where explicitly allowed such as `malloc()` for `ft_calloc` and `ft_strdup`.

### 2. Additional Utility Functions

The second part expands the library with useful helpers that are not part of the standard libc in the same form, but are extremely valuable for later projects.

Included functions:

- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_itoa`
- `ft_strmapi`
- `ft_striteri`
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

These functions make string manipulation and output handling much easier. They introduce more advanced topics such as substring extraction, string concatenation, trimming character sets, splitting strings into arrays, integer-to-string conversion, functional-style string iteration, and writing to file descriptors.

### 3. Linked List Functions

The third part of the project introduces a linked list API based on the following structure:

```c
typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;
```

Included linked list functions:

- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

This part teaches dynamic data structure manipulation, node traversal, insertion, deletion, iteration, and list transformation. Because the `content` field is a `void *`, the list is generic and can store different types of data, which makes it flexible and reusable in later projects. The subject explicitly includes this linked list module as part of the library design.

---

## Technical Constraints

This project must respect several important technical rules:

- all source files must be placed at the root of the repository
- global variables are forbidden
- helper functions should be declared `static` when their scope is limited to one file
- every `.c` file must compile with `-Wall -Wextra -Werror`
- the library must be created with `ar`
- `libtool` is forbidden
- the final library must be named `libft.a`
- memory leaks are not tolerated
- the project must follow the 42 Norm

The subject also notes that some functions such as `strlcpy`, `strlcat`, and `bzero` may not be available by default on some glibc systems during testing, which is why comparisons with system implementations may sometimes require BSD compatibility headers and flags.

---

## Instructions

### Repository contents

At minimum, the project should include:

- `Makefile`
- `libft.h`
- `ft_*.c`
- the generated `libft.a`

### Compilation

To compile the library:

```bash
make
```

This should generate:

```bash
libft.a
```

### Available Makefile rules

The subject requires the following rules:

```bash
make
make all
make clean
make fclean
make re
```

Typical usage:

```bash
make        # builds libft.a
make clean  # removes object files
make fclean # removes object files and libft.a
make re     # rebuilds everything
```

### Using the library in another C project

To use `libft.a` in your own project, include the header and link the library when compiling:

```bash
cc main.c -L. -lft -I.
```

Example:

```c
#include "libft.h"

int	main(void)
{
	ft_putendl_fd("Hello from libft!", 1);
	return (0);
}
```

Compile example:

```bash
cc main.c -L. -lft -I. -o test
./test
```

### Notes

- The library is static, so it is linked at compile time.
- Some functions allocate memory dynamically, so the caller is responsible for freeing returned memory when needed.
- Linked list functions require careful memory management, especially when deleting nodes or clearing lists.

---

## Example Use Cases

### String handling

```c
char	*name;
char	*msg;

name = ft_substr("Hello, world!", 7, 5);
msg = ft_strjoin("Name: ", name);
ft_putendl_fd(msg, 1);
free(name);
free(msg);
```

### Splitting strings

```c
char	**parts;
int		i;

parts = ft_split("42:Libft:C", ':');
i = 0;
while (parts[i])
{
	ft_putendl_fd(parts[i], 1);
	free(parts[i]);
	i++;
}
free(parts);
```

### Linked list creation

```c
t_list	*node1;
t_list	*node2;

node1 = ft_lstnew("first");
node2 = ft_lstnew("second");
ft_lstadd_back(&node1, node2);
```

---

## Why This Library Matters

Libft becomes a base dependency for many future 42 projects. Instead of rewriting the same helpers again and again, this library provides a tested and reusable toolkit.

It is also an important milestone because it develops habits that matter in real C programming:

- writing functions with clear responsibility
- respecting strict prototypes and expected behaviour
- managing heap memory correctly
- thinking about edge cases
- building reusable code instead of one-off solutions

---

## Testing

This repository may include personal test files during development, but only the required project files should be considered part of the final submission.

Useful things to test:

- null pointers where relevant
- empty strings
- zero-length allocations
- overlapping memory areas for `ft_memmove`
- boundary values for `ft_atoi` and `ft_itoa`
- linked list deletion and cleanup paths
- memory leak checks with tools such as `valgrind`

---

## Resources

### Official / Classic References

- 42 project subject for **Libft**
- manual pages (`man`) for the original libc functions
- The Open Group / POSIX documentation
- GNU C Library documentation
- BSD manual pages for functions such as `strlcpy` and `strlcat`
- Brian W. Kernighan and Dennis M. Ritchie, *The C Programming Language*
- Beej’s Guides for C memory and pointer fundamentals
- `malloc(3)`, `free(3)`, `write(2)`, and other Unix manual pages

### Recommended topics to study

- pointers and pointer arithmetic
- memory layout in C
- null-terminated strings
- static libraries and the `ar` command
- file descriptors
- linked lists
- dynamic memory management and leak prevention

### AI Usage

AI was used as a **support tool**, not as a substitute for implementation work.

It was used for:

- clarifying the README structure and wording
- improving documentation quality and readability
- reviewing English phrasing
- helping organise function groups and explain their role in the library
- summarising the project requirements from the subject

AI was **not** used as a blind source of final code. The goal of the project is to understand and implement the functions independently, especially because this project is part of the foundational phase of the 42 curriculum, where reasoning, peer learning, and genuine understanding are emphasised. This approach is consistent with the AI guidance included in the project subject.

---

## Final Notes

Libft is a foundational project focused on building a personal C library from scratch. More than just a collection of utility functions, it is an exercise in understanding core programming concepts deeply enough to recreate them with confidence.

This library is meant to grow into a practical tool for the rest of the curriculum and a strong first step in mastering C.
 

