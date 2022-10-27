#include "main.h"

/**
 * print_re - print a string in reverse
 * @s: string to be printed in rev
 */
void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (s[n] != '\0')
		n++;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
