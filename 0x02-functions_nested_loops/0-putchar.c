#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 *
 * @c: The character to print
 *
 *
 *
 * Return: On success 1.
 *
 * On error, -1 is returned, and errno is set appropriately.
 *
 */

int main(void)
{
	char ch[] = "_putchar";
	int i, size;

	size = sizeof(ch) / sizeof(char);
	for (i = 0; i < size; i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');
	return (0);

}

int _putchar(char c)

{

	return (write(1, &c, 1));

}
