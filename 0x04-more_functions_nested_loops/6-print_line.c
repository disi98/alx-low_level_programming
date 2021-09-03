#include "main.h"

/**
 * print_line - reads from main header
 * @n: imput parameter integer type
 * _putchar - prints the output
 * Return: Always 0 success
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
