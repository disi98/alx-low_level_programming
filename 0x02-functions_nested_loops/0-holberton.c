#include <unistd.h>
#include "main.h"

/**
 * main - refers to main header
 *
 * Return: 0.
 */
int main(void)
{
	char word[9] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(word[i]);
	_putchar('');

	return (0);
}

