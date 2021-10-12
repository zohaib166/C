#include <stdio.h>

int add_digits(long);

int main()
{
	long num = 3245;
	//clrscr();
	printf("%d", add_digits(num));
	//getch();
}

int add_digits(long n)
{
	//int sum = 0;
	if(n != 0)
	{
		return (n%10+add_digits(n/10));
	}
	else
    {
        return 0;
    }
    //return sum;
}
