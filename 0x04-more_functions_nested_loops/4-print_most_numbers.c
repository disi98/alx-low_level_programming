#include "main.h"

/**
 * print_most_numbers - reads from the main header
 * _putchar - prints the output
 *
 * Return: always 0 success
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}

