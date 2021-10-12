/* sum of the series 1, 2, 3, 4, 5...n*/

#include <stdio.h>
#include <conio.h>
int main()
{
	int n = 5;
	int i=0, sum=0;
	int nt =1;
	clrscr();
	while(i<n)
	{
		sum = sum + nt;
		nt = nt+1;
		i++;
	}
	printf("%d", sum);
	getch();
	return 0;
}