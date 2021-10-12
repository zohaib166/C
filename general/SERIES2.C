/* sum of the series 1!, 2!, 3!, 4!, 5!...n*/

#include <stdio.h>
#include <conio.h>
int main()
{
	int n = 5;
	int i=0, sum=0, fact=1;
	int nt =1;
	clrscr();
	while(i<n)
	{
		fact = fact * nt;
		nt = nt +1;
		sum = sum + fact;
		i++;
	}

	printf("%d", sum);
	return 0;
}