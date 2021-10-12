#include <stdio.h>

int fibonacci(int);

int main()
{
	int num=10, i, j=0;
	for(i=1; i<=num; i++)
	{
		printf("%d ", fibonacci(j));
		j++;
	}
	return 0;
}

int fibonacci(int n)
{
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return (fibonacci(n-1)+fibonacci(n-2));
}
