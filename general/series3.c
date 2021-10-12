/* sum of the series 1x2, 2x3, 3x4, 4x5, .....n*/

#include <stdio.h>

int main()
{
	int n = 5;
	int i=0, sum=0;
	int nt =0;
	while(i<n)
	{
		nt = (i+1) * (i+2);
		sum = sum + nt;
		i++;
	}
	
	printf("%d", sum);
}