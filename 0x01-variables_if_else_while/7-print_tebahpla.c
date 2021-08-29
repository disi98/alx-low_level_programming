#include <stdio.h>

/**
 * main - begining of code
 *
 * Return: Returns 0
 */
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
		putchar(l);
	putchar('\n');
	return (0);
}
