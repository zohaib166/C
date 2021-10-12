/* sum of the series 1,6,16,31,51 .....n*/

#include <stdio.h>

int main()
{
	int n = 5;
	int i=1, sum=0;
	int nt =1;
	while(i<=n)
	{
		sum = sum + nt;
		nt = nt+i*5;
		i++;
	}
	
	printf("%d", sum);
}