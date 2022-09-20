#include "main.h"
#include <stdio.h>

/**
 * main - This function returns
 * the length of a string
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s++)
	l++;
	return (l);
}
