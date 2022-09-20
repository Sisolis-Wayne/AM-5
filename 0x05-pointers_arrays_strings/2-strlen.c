#include "main.h"
#include <stdio.h>

/**
 * _strlen - This function returns
 * the length of a string
 * @s: the pointer for the char
 * Return: 0
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s++)
	l++;
	return (l);
}
