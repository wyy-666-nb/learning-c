#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 1;
	int b = 1;
	int c = 0;
	int i = 0;
	for (i = 0;i <= 20;i++)
	{
		printf("%d  ", a);
		c = a + b;
	    a = b;
		b = c;
	}


	return 0;
}