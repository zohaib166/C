#include<stdio.h>
int main()
{
    int rows;
    short int i,j;
    int x=1,k=0;
    printf("Enter the number of rows\n");
    scanf("%d",&rows);
    for(i=0;i<rows;i++)
    {
        for(j=1;j<=rows-i+1;j++)
        {
            printf("  ");
        }

        for(j=1;j<=i+1;j++)
        {
            printf("%3d ",x);

        }
        x=x*2;
        printf("\n");
    }
}
