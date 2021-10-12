#include <stdio.h>

int main()
{
	int a=4, b=6;
	int c;
	//printf("\n%d %d", a, b);
	if (a!=0 && c!=0)
	{
		c = a * b;
		a = c / a;
		b = c / a;
		printf("\n%d %d", a, b);
	}
	else
		printf("\nSwapping cannot be done using multiplication method\n");
	
}
