#include "main.h"

/**
 * swap_int - function that takes two parameters of type int
 * @a: input parameter of type int
 * @b: intup parameter of type int
 * Return: always 0 success
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
