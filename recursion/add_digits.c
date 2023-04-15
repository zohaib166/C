#include <stdio.h>

int add_digits(int);

void main()
{
	long num = 32456;
	printf("%d", add_digits(num));
}

int add_digits(int n)
{
	int sum = 0;
	while(n != 0)
	{
		sum = sum + (n%10);
		n = n / 10;
	}
	if(sum < 10)
		return sum;
	else
		return add_digits(sum);
}
