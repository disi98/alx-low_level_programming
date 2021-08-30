#include <stdio.h>
#include <stdlib.h>

/**
 * main - starting point
 *
 * Return: 1 success
 */
int main(void)
{
	char *h = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	while (*h)
		putchar(*h++);
	putchar('\n');
	return (1);
}
