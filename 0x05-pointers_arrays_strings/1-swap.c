#include "main.h"
#include <stdio.h>

/**
 * swap_int - this swaps the value of two integers
 * @a: a pointer the integer; this becomes the value of pointer b
 * @b: a pointer the integer; this becomes the value of pointer a
 * 
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int p;
	p = *a;
	*a = *b;
	*b = p;
}
