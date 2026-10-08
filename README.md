*This project has been created as part of the 42 curriculum by asallam.*

# Description

Libft is a custom C library developed as part of the 42 curriculum.

The goal of this project is to recreate a set of functions from the standard C library and develop additional utility functions that can be reused in future 42 projects.

The library provides functions for:
- Character checking and conversion
- String manipulation
- Memory manipulation
- Number conversion
- File descriptor output
- Linked list manipulation

The project focuses on understanding low-level C programming concepts such as pointers, memory allocation, strings, arrays, structures, and linked lists.

# Instructions

## Compilation

The project includes a `Makefile` that can be used to compile the library.

To compile the library:

    make

This creates the `libft.a` static library.

To remove the object files:

    make clean

To remove the library and object files:

    make fclean

To recompile the entire project:

    make re

# Resources

[C_Linked_List_Playlist](https://www.youtube.com/playlist?list=PLfqABt5AS4FmXeWuuNDS3XGENJO1VYGxl)

[Makefile_Tutorial](https://makefiletutorial.com/#why-do-makefiles-exist)

## Library Functions

### Character Functions

- `ft_isalpha` - Checks whether a character is alphabetic.
- `ft_isdigit` - Checks whether a character is a digit.
- `ft_isalnum` - Checks whether a character is alphanumeric.
- `ft_isascii` - Checks whether a character belongs to the ASCII character set.
- `ft_isprint` - Checks whether a character is printable.
- `ft_toupper` - Converts a lowercase character to uppercase.
- `ft_tolower` - Converts an uppercase character to lowercase.

### String Functions

- `ft_strlen` - Calculates the length of a string.
- `ft_strlcpy` - Copies a string into a destination buffer with size limitation.
- `ft_strlcat` - Appends a string to a destination buffer with size limitation.
- `ft_strchr` - Locates the first occurrence of a character in a string.
- `ft_strrchr` - Locates the last occurrence of a character in a string.
- `ft_strncmp` - Compares two strings up to a specified number of characters.
- `ft_strnstr` - Locates a substring within a string, limited by a specified length.
- `ft_strdup` - Creates a dynamically allocated duplicate of a string.
- `ft_substr` - Creates a substring from a given string.
- `ft_strjoin` - Concatenates two strings into a newly allocated string.
- `ft_strtrim` - Removes specified characters from the beginning and end of a string.
- `ft_split` - Splits a string into an array of strings using a delimiter.
- `ft_strmapi` - Applies a function to each character of a string and creates a new string.
- `ft_striteri` - Applies a function to each character of a string.

### Memory Functions

- `ft_memset` - Fills a block of memory with a specified byte.
- `ft_bzero` - Sets a block of memory to zero.
- `ft_memcpy` - Copies bytes from one memory area to another.
- `ft_memmove` - Copies bytes while handling overlapping memory regions.
- `ft_memchr` - Searches a memory area for a specified byte.
- `ft_memcmp` - Compares two blocks of memory.
- `ft_calloc` - Allocates and initializes memory to zero.

### Conversion Functions

- `ft_atoi` - Converts a string to an integer.
- `ft_itoa` - Converts an integer to a newly allocated string.

### File Descriptor Functions

- `ft_putchar_fd` - Writes a character to a file descriptor.
- `ft_putstr_fd` - Writes a string to a file descriptor.
- `ft_putendl_fd` - Writes a string followed by a newline to a file descriptor.
- `ft_putnbr_fd` - Writes an integer to a file descriptor.

### Linked List Functions

- `ft_lstnew` - Creates a new linked list node.
- `ft_lstadd_front` - Adds a node to the beginning of a list.
- `ft_lstsize` - Returns the number of nodes in a list.
- `ft_lstlast` - Returns the last node of a list.
- `ft_lstadd_back` - Adds a node to the end of a list.
- `ft_lstdelone` - Deletes one node and frees its content.
- `ft_lstclear` - Deletes and frees an entire linked list.
- `ft_lstiter` - Applies a function to every node's content.
- `ft_lstmap` - Creates a new list by applying a function to every node.

## Using the Library

Include the library header in your C program:

    #include "libft.h"

Compile your program together with the library:

    cc main.c libft.a


## AI Usage

AI tools were used as a learning and development aid during this project.

They were mainly used to:
- Clarify C programming concepts such as pointers, memory management, `size_t`, and dynamic allocation.
- Explain the behavior and edge cases of standard C library functions.
- Review implementations and identify potential edge cases.
- Assist with testing strategies and comparing the custom implementations with their standard library counterparts.

AI was used as a supplementary learning tool. The implementation and final code were written, tested, and reviewed as part of the project's development process.

# Technical Concepts

This project provided practical experience with:

- C programming
- Pointers
- Dynamic memory allocation
- Strings and character arrays
- Memory manipulation
- Static libraries
- Makefiles
- File descriptors
- Function pointers
- Structures
- Linked lists
- Git and GitHub

# Project Structure

    .
    ├── Makefile
    ├── libft.h
    ├── ft_*.c
    └── README.md

# Author

**asallam**
