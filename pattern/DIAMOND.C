#include <stdio.h>
int main()
{
	int size=10;
	//int total = size+size-1;
	char ch = '*';
	register int i, j;
	clrscr();
	for(i=0; i<size; i++)
	{
		for(j=0; j<size-i-1; j++)
		{
			printf(" ");
		}
		for(j=0; j<i+1; j++)
		{
			printf("%c ", ch);
		}
		printf("\n");
	}
	for(i=0; i<size-1; i++)
	{
		for(j=1; j<=i+1; j++)
		{
			printf(" ");
		}
		for(j=size-1; j>i; j--)
		{
			printf("%c ", ch);
		}
		printf("\n");
	}
	getch();
	return 0;
}
