#include "main.h"

/**
 * print_i - prints an integer
 * @i: integer to print
 *
 * Return: number of chars and digits printed
 */
int print_i(va_list i)
{
	int x[10];
	int s, m, n, sum, count;

	n = va_arg(i, int);
	count = 0;
	m = 1000000000;
	x[0] = n / m;
	for (s = 1; s < 10; s++)
	{
		m /= 10;
		x[s] = (n / m) % 10;
	}
	if (n < 0)
	{
		_putchar('-');
		count++;
		for (s = 0; s < 10; s++)
			x[s] *= -1;
	}
	for (s = 0, sum = 0; s < 10; s++)
	{
		sum += x[s];
		if (sum != 0 || s == 9)
		{
			_putchar('0' + x[s]);
			count++;
		}
	}
	return (count);
}

/**
 * print_d - prints a decimal
 * @d: decimal to print
 *
 * Return: number of chars and digits printed
 */
int print_d(va_list d)
{
	int f[10];
	int j, m, n, sum, count;

	n = va_arg(d, int);
	count = 0;
	m = 1000000000;
	f[0] = n / m;
	for (j = 1; j < 10; j++)
	{
		m /= 10;
		f[j] = (n / m) % 10;
	}
	if (n < 0)
	{
		_putchar('-');
		count++;
		for (j = 0; j < 10; j++)
			f[j] *= -1;
	}
	for (j = 0, sum = 0; j < 10; j++)
	{
		sum += f[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + f[j]);
			count++;
		}
	}
	return (count);
}
