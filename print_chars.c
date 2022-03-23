#include "main.h"

/**
 * print_c - Imprime caracter
 * @v: Caracter a imprimir
 * Return: 1
 */

int print_c(va_list v)
{
	char vh = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}

/**
 * print_s - imprimir cadena
 * @r: cadena a imprimir
 * Return: numero de caracteres impresos
 */
int print_s(va_list r)
{
	int count;
	char *str = va_arg(r, char *);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count]; count++)
	{
		_putchar(str[count]);
	}
	return (count);
}
