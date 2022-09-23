#include "main.h"

/**
 * _strcat - concatenates two string together
 *
 * @src: Char[] to append to dest
 * @dest: Char[] to be appended to
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (src[b] != '\0')
	{
		dest[a] += src[b];
		a++;
		b++;
	}

	dest += '\0';

	return (dest);
}
