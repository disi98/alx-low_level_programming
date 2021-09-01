#include <unistd.h>
#include "main.h"

/**
 * main - refers to main header
 *
 * Return: 0.
 */
int main(void)
{
	char word[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
	return (0);
}

