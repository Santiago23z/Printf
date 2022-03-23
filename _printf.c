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

	if (!format || (format[0] == '%' && !format[1]))
        	return (-1);
    	if (format[0] == '%' && format[1] == ' ' && !format[2])
        	return (-1);
	va_start(valist, format);
	while (format[i])
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
				if (f == NULL)
					_printf("%%%c", format[i]);
				else
					count += f(valist);
			}
		}
		i++;
	}	
	va_end(valist);
	return (count);
}
