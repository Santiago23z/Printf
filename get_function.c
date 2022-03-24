#include "main.h"

/**
 * get_function - seleccione el formato a imprimir
 * @s: el caracter que se compara
 * Return: '\0'
 */
int (*get_function(char s))(va_list)
{
printf_t y[] = {
{"s", print_s},
{"c", print_c},
{"i", print_i},                         
{"d", print_d},                         
{"%", percent},
{NULL, NULL}
};

int i = 0;
char *e = &s;
while (i < 5)
{
if (_strcmp(y[i].g, e) == 0)
return (y[i].j);
i++;
}
return (NULL);
}
