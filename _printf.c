#include <stdio.h>
#include "main.h"

/**
 * _printf - prints anything
 * @format: list of argument types passed to the function
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
unsigned int i = 0, count = 0;
va_list valist;
int (*f)(va_list);
va_start(valist, format);

if (!format || (format[0] == '%' && !format[1]))
return (-1);
if (format[0] == '%' && format[1] == ' ' && !format[2])
return (-1);

while (format[i] != '\0')
{
if (format[i] != '%')
{
_putchar(format[i]);
count++;
}
else
{
i++;
if (format[i] == '%')
{
count += _putchar('%');
}
else
{
f = get_function(format[i]);
count += (f) ? f(valist) : _printf("%%%c", format[i]);
}
}
i++;
}
va_end(valist);
return (count);
}