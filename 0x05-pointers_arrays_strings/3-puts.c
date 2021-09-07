#include "main.h"

/**
 * _puts - function that prints str
 * @str: input of type str
 * Return: alway 0
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_puts(str[i]);
		i++;
	}
	_putchar('\n');
}
