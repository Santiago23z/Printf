#include "main.h"

/**
 * print_c - Imprime caracter
 * @c: Caracter a imprimir
 * Return: 1
 */

int print_c(va_list c)
{
	int vh = va_arg(c, int);

	_putchar(vh);
	return (1);
}

/**
 * print_s - imprimir cadena
 * @s: cadena a imprimir
 * Return: numero de caracteres impresos
 */
int print_s(va_list s)
{
	int count;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count] != '\0'; count++)
	{
		_putchar(str[count]);
	}
	return (count);
}

/**
 * percent - porcentaje
 * @perc: variable
 * Return: %
 */
int percent(va_list perc)
{
	(void)perc;
	return (_putchar('%'));
}
