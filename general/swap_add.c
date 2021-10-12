#include <stdio.h>

int main()
{
	int a=10, b=6;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("\n%d %d", a, b);
}
