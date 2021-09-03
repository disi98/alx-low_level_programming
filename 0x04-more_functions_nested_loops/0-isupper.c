#include "holberton.h"
#include "main.h"

/**
 * _isupper - A checks for capitalized char.
 * @c: An input character
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	char caps = 'A';
	int lower = 0;

	for (; caps <= 'Z'; caps++)
	{
		if (c == caps)
		{
			_isupper = 1;
			break;
		}
	}

	return (_isupper);
}
