/* sum of the series (1*1+1), (2*2+2) .....n*/

#include <stdio.h>

int main()
{
	int n = 5;
	int i=0, sum=0;
	int nt =1;
	while(i<n)
	{
		nt = (i+1) * (i+1) + (i+1);
		sum = sum + nt;
		i++;
	}
	
	printf("%d", sum);
}