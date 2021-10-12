#include <stdio.h>

int add_digits(int);

void main()
{
	long num = 32456;
	//clrscr();
	printf("%d", add_digits(num));
	//getch();
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
