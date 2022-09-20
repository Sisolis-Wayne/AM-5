#include <stdio.h>

int main(void)
{
	char *str;
	int num;

	str = "school";
	num = (sizeof(str) / sizeof(char)) * 2;
	printf("result: %d\n", num);
	return (0);
}
