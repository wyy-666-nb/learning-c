#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 1;
	int b = 1;
	int c = 0;
	for (b = 1;b < 10;b++)
	{
		for (a = 1;a <= b;a++)
		{
			c = a * b;
			printf("%d * %d = %-2d  ", a, b, c);
		}
		printf("\n");
	}
    return 0;
}