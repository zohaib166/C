//  1 2 3 4 5 4 3 2 1
//  1 2 3 4   4 3 2 1
//  1 2 3       3 2 1
//  1 2           2 1
//  1               1
#include <stdio.h>

int main()
{
    int num;
    int i,j,k;
    printf("Enter the number of rows\n");
    scanf("%d",&num);
	for(j=1; j<=num; ++j) //for first row
	{
		printf("%2d", j);
	}
	j=j-2;
	for(;j>=1; j--)
	{
		printf("%2d", j);
	}
	printf("\n");

	for(i=1; i<num; i++) //for rest of the rows
	{
		for(j=1; j<=num-i; ++j)
		{
			printf("%2d", j);
		}
		for(k=0; k<i+i-1;k++)
		{
			printf("  ");
		}
		j--;
		for(;j>=1; j--)
		{
			printf("%2d", j);
		}
		printf("\n");
	}
}
