# _printf 🫡

is a function of the C language that is programmed to print numbers, strings, char, is a custom implementation of the C programming function printf. This project is an application of the C programming knowledge that Holberton School Cohort 17 students have learned since they started the program on January 31, 2022

***Prototype: int _printf(const char *, ...);***

## Examples📚

**string**
- input: _printf("%s\n", 'This is a string.');
- output: This is a string.

**Character**
- input: _printf("The first letter in the alphabet is %c\n", 'A');
- output: The first letter in the alphabet is A

**integer**
- input: _printf("There are %i dozens in a gross\n", 12);
- output: There are 12 dozens in a gross

**Decimal**
- input: _printf("%d\n", 1000);
- output: 1000

## Project Requirements📝

- All files will be compiled on Ubuntu 14.04 LTS
- Programs and functions will be compiled with gcc 4.8.4 using flags -Wall -Werror -Wextra and -pedantic
- Code must follow the Betty style
- Global variables are not allowed
- Authorized functions and macros:
  - write (man 2 write)
  - malloc (man 3 malloc)
  - free (man 3 free)
  - va_start (man 3 va_start)
  - va_end (man 3 va_end)
  - va_copy (man 3 va_copy)
  - va_arg (man 3 va_arg)

**Mandatory Tasks**📌

- Write function that produces output with conversion specifiers c, s, and %.
- Handle conversion specifiers d, i.
- Create a man page for your function.

## File Descriptions👨🏻‍💻

- _printf.c: - contains the fucntion _printf, which uses the prototype int _printf(const char *format, ...);. The format string is composed of zero or more directives. See man 3 printf for more detail. _printf will return the number of characters printed (excluding the null byte used to end output to strings) and will write output to stdout, the standard output stream.

- _putchar.c: - contains the function _putchar, which writes a character to stdout.
- main.h: - contains all function prototypes used for _printf.
- man_3_printf: - manual page for the custom _printf function.
- print_chars.c: - contains the functions print_c, print_s.
- print_numbers.c: - contains the functions print_i and print_d, which handle the conversion specifiers i and d, respectively
- print_hex.c: - contains the functions print_hex, which prints an unsigned int in hexidecimal form, print_x, print_X, and print_p, which handle the conversion specifiers x, X, and p, respectively
- print_unsigned_int.c: - contains the functions print_u, print_o, and print_b, which handle the conversion specifiers u, o, and b, respectively
- print_rot13.c - contains the function print_R, which handles the conversion specifier R

**Authors**😎
- **Santiago zapata alvarez**🫡
- **Swaider Tobon**🫡

 
