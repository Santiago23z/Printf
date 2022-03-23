#include "main.h"

/**
 * get_function - seleccione el formato a imprimir
 * @z: el caracter que se compara
 * Return: '\0'
 */
int (*get_function(char z))(va_list)
{
	printf_t y[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_int},
		{NULL, NULL}
	};
	
	int h = 0;
	char *a = &z;

	while (y[h].g != NULL)
	{
		if (_strcmp(y[h].g, a) == 0)
			return (y[h].j);
		h++;
	}
