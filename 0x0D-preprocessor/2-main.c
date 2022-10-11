#include<stdio.h>

/**
 * main - this program prints the name
 * of the file it was compiled with
 *
 * Return: 0 (Always success)
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
