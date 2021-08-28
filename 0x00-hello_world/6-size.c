#include <stdio.h>

/**
 * main-entry point
 *
 * return
 */
int main(void)
{
	/**
	 * Initialize the datatypes for any varriables, say i for int
	 * li for long int
	 * lli for long long int
	 * c for char
	 * f for float
	 */
	int i;
	long int li;
	long long int lli;
	char c;
	float f;

	printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("Size of a int: %lu bytes(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(li));
	printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(lli));
	printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
	return (0);
}
