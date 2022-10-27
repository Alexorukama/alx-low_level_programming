#include "main.h"

/**
 * strcat - concatenates the string pointed
 * @dest: A poiter to the string to be concatenated upon
 * @src: The pointer to the destination string
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
