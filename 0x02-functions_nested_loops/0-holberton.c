#include "main.h"

/**
 * main - starting point
 *
 * Return: always (0)
 */
int main(void)
{
	char c[10] = "_putchar";
	int i;

	for (i =0; i < 10; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
