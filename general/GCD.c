#include <stdio.h>

int main()
{
	int num1 = 100;
	int num2 = 120;
	printf("%d\n", GCD(num1, num2));
	return 0;
}
int GCD(int x, int y)
{
	int temp;
	while(y!=0)
	{
		temp = y;
		y = x % y;
		x = temp;
	}
	return x;
}



