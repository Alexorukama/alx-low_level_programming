#include <stdio.h>

/**
 * main - Prints the alphabet in lower and uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);

	for (alp = 'A'; alp <= 'Z'; alp++)

	putchar('\n');

	return (0);
}
