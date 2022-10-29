#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string 
 * @s2: strmp 
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, cmp = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && cmp == 0)
	{
		cmp = s1[i] = s2[i];
		i++;
	}

	return (cmp);
}
