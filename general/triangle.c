#include <stdio.h>
int main()
{
	int size=5;
	char ch = '*';
	register int i, j;
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
	return 0;
}
