#include <stdio.h>

long factorial(int);

int main()
{
	int size=6;
	register int i, j;
	for(i=0; i<size; i++)
	{
		for(j=0; j<size-i-1; j++)
		{
			printf(" ");
		}
		for(j=0; j<=i; j++)
		{
			printf("%ld ", factorial(i)/(factorial(j)*factorial(i-j)));
		}
		printf("\n");
	}
	return 0;
}
long int factorial(int x)
{
	long fact=1;
	int i=1;
	while(i<=x)
	{
	   fact = fact * i;
	   i++;
	}
	return fact;
}
