#include <stdio.h>
#include <math.h>

int main()
{
    int num = 10;
	int count=1;
	int flag = 1;
	int i,j=3;
	//int k = 2;
	int complexity=0;
	printf("2,");

	while(count!=num)
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
			complexity++;
		}
		if(flag==1)
		{
			//printf("3.i=%d, j=%d\n",i,j);
			count++;
			printf("%d,",j);
			//k++;
		}
		j++;
		flag = 0;

	}
	/*for(k=0; k<num; k++)
		printf("%d ", arr[k]);*/
	printf("Complexity: \n%d", complexity);
	return 0;
}
