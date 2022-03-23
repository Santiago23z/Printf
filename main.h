#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct print -unsigned int ui;
    void *addr; Structure for printing variuos
 * @g: Letter to print
 * @j: function to print
 */

typedef struct print
{
	char *g;
	int (*j)(va_list);
} printf_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i);
int print_d(va_list d);
int percent(va_list o);
int (*get_function(char s))(va_list);
int _strcmp(char *s1, char *s2);
#endif /* _MAIN_H */
