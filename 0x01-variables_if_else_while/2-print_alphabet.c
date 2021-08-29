#include <stdio.h>

/**
 * main - starting point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
