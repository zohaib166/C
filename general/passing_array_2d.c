/*initializing a 2D matrix*/
#include <stdio.h>
#define ROWS 3
#define COLS 3

void display2(int (*q)[5], int, int);
void display1(int q[][5], int, int);
int main()
{
	int mat[5][5];
	int i,j;
	//clrscr();
	printf("Enter the elements of the matrix\n");
	for(i=0; i<ROWS; i++)
	{
		for(j=0; j<COLS; j++)
		{
			scanf("%d", &mat[i][j]);
		}
	}
	display1(mat, ROWS, COLS);
	display2(mat, ROWS, COLS);
	//getch();
}
//method 1
void display1(int q[][5], int row, int col)
{
	int i,j;
	printf("Method 1: \n");
	for(i=0; i<row; i++)
	{
		for(j=0;j<col; j++)
		{
			printf("%3d", q[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
//method 2
void display2(int (*q)[5], int row, int col)
{
	int i,j;
	int *p;
	printf("Method 2: \n");
	for(i=0; i<row; i++)
	{
		p=q[i];
		for(j=0;j<col; j++)
		{
			printf("%3d", *(p+j));
		}
		printf("\n");
	}
	printf("\n");
}
