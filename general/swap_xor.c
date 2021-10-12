#include <stdio.h>

int main()
{
	int a=10, b=6;
	int c;
	c = a ^ b;
	a = c ^ a;
	b = c ^ a;
	printf("\n%d %d", a, b);
}
