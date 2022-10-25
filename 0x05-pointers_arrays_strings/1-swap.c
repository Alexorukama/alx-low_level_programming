#include "main.h"

/**
 * swap_int - swaps the values of the two integers
 * @a: int a
 * @b: int b
 * Return 0
 */
void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
