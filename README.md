# libft

`libft` is a C library that implements a collection of useful functions for various tasks such as memory management, string manipulation, and mathematical operations. The project is part of the curriculum at 42 (a coding school), and its goal is to master C programming while building useful utilities from scratch.

## Functions Implemented

The library provides the following functionalities (this list can be extended as needed):

### String Manipulation Functions
- `ft_strlen` – Returns the length of a string.
- `ft_strcpy` – Copies a string to another.
- `ft_strdup` – Duplicates a string by allocating memory.
- `ft_strcat` – Concatenates two strings.
- `ft_strcmp` – Compares two strings lexicographically.
- `ft_substr` – Returns a substring from a string.

### Memory Management Functions
- `ft_memset` – Fills a block of memory with a particular value.
- `ft_bzero` – Sets a block of memory to zero.
- `ft_memcpy` – Copies memory from one location to another.
- `ft_memmove` – Moves a block of memory (handling overlapping regions).
- `ft_memchr` – Locates a byte in memory.
- `ft_memcmp` – Compares two blocks of memory.

### Character Functions
- `ft_isalpha` – Checks if a character is an alphabet.
- `ft_isdigit` – Checks if a character is a digit.
- `ft_isalnum` – Checks if a character is alphanumeric.
- `ft_isascii` – Checks if a character is an ASCII character.
- `ft_isprint` – Checks if a character is printable.
- `ft_toupper` – Converts a character to uppercase.
- `ft_tolower` – Converts a character to lowercase.

### List Functions
- `ft_lstnew` – Creates a new linked list node.
- `ft_lstadd_front` – Adds a new node to the front of the list.
- `ft_lstadd_back` – Adds a new node to the back of the list.
- `ft_lstdelone` – Deletes a node from the list.
- `ft_lstclear` – Clears all nodes in the list.

### Other Utility Functions
- `ft_itoa` – Converts an integer to a string.
- `ft_putchar_fd` – Outputs a character to a file descriptor.
- `ft_putstr_fd` – Outputs a string to a file descriptor.
- `ft_putendl_fd` – Outputs a string followed by a newline to a file descriptor.
- `ft_putnbr_fd` – Outputs an integer to a file descriptor.

## Compilation

To compile the library, clone this repository and use the `Makefile` provided. The `libft.a` static library will be created as an output.

1. Clone the repository:
	```bash
    git clone https://github.com/abdelkabirelmajdoub/1337-libft.git
    cd libft
    ```

2. Run `make` to compile the library:
    ```bash
    make all # To use library
	gcc yourfile.c libft.a -o youroutput.o # for use this lib
    ```

3. The compiled static library (`libft.a`) will be generated in the repository folder.

## Usage

To use `libft` in your C project, simply include the necessary headers and link against `libft.a` when compiling your program.

Example:
```c
#include "libft.h"

int main() {
    char *str = "Hello, World!";
    int length = ft_strlen(str);
    printf("Length of string: %d\n", length);
    return 0;
}
