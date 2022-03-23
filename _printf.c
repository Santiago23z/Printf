#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: specify the text format
 *
 * Return: number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	va_list xz;
	int (*fun)(va_list);
	int v = 0;
	int arg = 0;

	va_start(xz, format);
	while (format[v])
	{
		if (format[v] == '%' && format[v + 1] == '%')
		{
			_putchar('%');
			arg++;
			v += 2;
			continue;
		}
		else if (format[v] == '%')
		{
			fun = get_op_func(&format[v]);
			if (fun != NULL)
			{
				arg += fun(xz);
				v += 2;
				continue;
			}
			else
			{
				if (format[v] == '%' && format[v + 1] == '\0')
				{
					arg++;
					_putchar(format[v]);
				}
			}
		}
		/* if format[i] == \n */
		else if (format[v] == 92 && format[v + 1] == 110)
		{
			_putchar('\n');
			break;
		}
		else if (format[v] != '\0')
		{
			_putchar(format[v]);
			arg++;
		}
		v++;
	}
	va_end(xz);
	return (arg);
}
