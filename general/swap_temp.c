#include <stdio.h>

int main()
{
	int a=10, b=6;
	int tmp;
	printf("\n%d %d", a, b);
	tmp = a;
	a = b;
	b = tmp;
	printf("\n%d %d", a, b);
}
