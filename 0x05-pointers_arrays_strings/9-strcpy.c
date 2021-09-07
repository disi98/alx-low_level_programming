#include "main.h"

/**
 * _strcpy - copy func
 * @dest: input oftype char
 * @src: input of type char
 * Return: always 0
 */
char *_strcpy(char *dest, char *src)
{
	char *aux = dest;

	while (*src)
		*dest++ = *src++;
	return (aux);
}
