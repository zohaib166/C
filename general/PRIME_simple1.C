#include <stdio.h>

int main()
{
    int num;
    printf("This code prints prime numbers within n natural numbers.\nPlease enter the value of n\n");
    scanf("%d",&num);
	int flag = 1;
	int i,j=3;
	printf("2,");
	while(j!=num)
	{
		i=2;
		while(i<j)
		{
			if(j%i==0)
			{
				//printf("1.i=%d, j=%d\n",i,j);
				flag = 0;
				break;
			}
			else
			{
				//printf("2.i=%d, j=%d\n",i,j);
				flag = 1;
				i++;
			}
		}
		if(flag==1)
		{
			//printf("3.i=%d, j=%d\n",i,j);
			printf("%d,",j);
			//k++;
		}
		j++;
        //printf("%d",count);
		flag = 0;

	}
	return 0;
}
