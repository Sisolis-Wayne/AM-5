#include <stdio.h>

int main(void)
{
	char s[] = "Programming ";
	int i;

	for (i = 0; s[i] != '\0'; i++);
	{
	printf("Length of the string: %d\n", i);
	return 0;
	}
}
