#include<stdio.h>
int main()
{
    int rows;
    short int i,j;
    printf("Enter the number of rows\n");
    scanf("%d",&rows);
    for(i=0;i<rows;i++)
    {
        for(j=0;j<rows-i;j++)
        {
            printf("  ");
        }

        for(j=1;j<i+1;j++)
        {
            printf("%d ",j);
        }

        for(;j>=1;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
