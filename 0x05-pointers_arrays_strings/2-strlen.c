#include "main.h"

/**
 * _strien - function
 * @s: input parameter of type int
 * Return: always 0
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
