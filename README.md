<div align="center">

  <h1>Ft_Printf</h1>
  <b>Second project of my 42 cursus.</b>
  <br>
  <br>
  <b>Because ft_putnbr() and ft_putstr() aren’t enough<b>
  <br>
  <br>
   

  ![Static Badge](https://img.shields.io/badge/Score-%3125%2F100-green?style=for-the-badge&logo=42&labelColor=%23323030&color=%2381D2C7)
  ![Static Badge](https://img.shields.io/badge/Language-green?style=for-the-badge&logo=C&labelColor=%23323030&color=%2381D2C7)



</div>

## Overview

Ft_printf is a cool and efficient implementation of the `printf()` function! This library, coded from scratch, it aims to replicate the functionality of the original `printf()` found in the libc library.

## Project Structure

Ensure you have the following files in your project directory:

- `Makefile`: To compile the project with various options.
- `include/ft_printf.h`: Header files containing function prototypes and necessary declarations.
- `src/*.c`: Source code files implementing the `ft_printf()` function and supporting functions.

## Makefile Commands

- `make`: Compiles the project and creates the `libftprintf.a` library.
- `make help`: Displays a list of available commands.
- `make clean`: Removes object files, keeping only the source code.
- `make fclean`: Cleans the project by removing the compiled library and object files.
- `make re`: Performs a full recompilation by cleaning and then recompiling the project.

## External Functions

The implementation uses the following external functions:

- `malloc`: Allocates memory dynamically.
- `free`: Frees allocated memory.
- `write`: Writes to a file descriptor.
- `va_start`, `va_arg`, `va_copy`, `va_end`: Functions for handling variable arguments.

## Functionality

The main attraction of this library is the `ft_printf()` function, which emulates the behavior of the original `printf()`. It supports the following conversions:

- `%c`: Character
- `%s`: String
- `%p`: Pointer
- `%d`: Decimal
- `%i`: Integer
- `%u`: Unsigned integer
- `%x`: Hexadecimal (lowercase)
- `%X`: Hexadecimal (uppercase)
- `%%`: Percentage sign

## Bonus Features

In addition to the standard functionality, the library includes the following bonuses:

- Any combination of the following flags: `-`, `0`, `.`
- And all the following flags: `#`, `+`, `space`, `*`

## Important Notes

- Buffer management from the original `printf()` is deliberately not implemented.

If you have any questions or feedback, don't hesitate to reach out. Happy coding! 🚀
