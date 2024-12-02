---

Libft

A custom library created as part of the School 42 curriculum, replicating a subset of the C standard library functions with a few additional utility functions.

Table of Contents

Introduction

Functions Implemented

Project Structure

Compilation

Usage

Notes

License


Introduction

Libft is a personal C library created from scratch to understand and replicate several fundamental functions of the C standard library. This project serves as a foundation for all future projects at School 42, providing essential tools for managing strings, memory, linked lists, and more.

Functions Implemented

This library includes implementations of:

Memory manipulation: ft_memset, ft_memcpy, ft_memmove, ft_memcmp, etc.

String manipulation: ft_strlen, ft_strlcpy, ft_strlcat, ft_strncmp, etc.

Character checks and conversions: ft_isalpha, ft_isdigit, ft_tolower, ft_toupper, etc.

Linked list functions (bonus part): ft_lstnew, ft_lstadd_front, ft_lstiter, etc.


Bonus

Additionally, it includes linked list functions to help manage t_list structures.

Project Structure

📁 libft/
├── src/              # Contains all function implementations
├── includes/         # Contains the libft.h header file
├── Makefile          # Script to compile the library
└── README.md         # This file

Compilation

To compile the library, use the Makefile provided:

make

This command will generate a libft.a static library, which can then be linked to other projects.

To clean up object files, use:

make clean

To remove all compiled files, including the static library, use:

make fclean

Usage

1. Clone this repository.


2. Compile using the Makefile.


3. Link libft.a with your own project:

gcc your_project.c -L. -lft -o your_project


4. Include libft.h in your code to access the functions:

#include "libft.h"



Notes

The t_list struct used in the bonus section has a content field of type void*, allowing it to store data of any type.

This library is limited to the functions and types specified in the project requirements.


License

This project is released under the MIT License. See LICENSE for more details.


---
