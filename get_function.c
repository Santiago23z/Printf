#include "main.h"

/**
 * get_function - seleccione el formato a imprimir
 * @z: el caracter que se compara
 * Return: '\0'
 */
int (*get_function(char *s))(va_list)
{
printf_t y[] = {
{"s", print_s},
{"c", print_c},
{"i", print_i},
{"d", print_d},
{NULL, NULL}
};

int i = 0;
while (i < 5)
{
if (strcmp(y[i].g, s) == 0)
return (y[i].j);
i++;
}
return (NULL);
}
