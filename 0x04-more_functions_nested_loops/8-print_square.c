#include "main.h"

/**
 * print_square - reads from the main header
 * @size: parameter input of type int
 * _putchar - display the output
 * Returmn: Always 0
 */
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
