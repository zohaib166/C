#include <stdio.h>

long factorial(int);

long factorial(int n)
{
	if(n==0 || n==1)
		return 1;
	else
		return (n*factorial(n-1));
}