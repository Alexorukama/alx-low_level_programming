#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings.
 * @separator: to be printed between the strings.
 * @n: how many args
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *current;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		current = va_arg(args, char *);

		if (current != NULL)
		{
			printf("%s", current);
		}
		else
			printf("(nil)");

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(args);
}
