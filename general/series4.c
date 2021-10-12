/* sum of the series 1-2+3-4+5-.....n*/

#include <stdio.h>

int main()
{
	int n = 25;
	int i=1, sum=0;
	int sign_flag = 0;
	int nt = 1;
	while(i<=n)
	{
		if(sign_flag ==0)
		{
			sum = sum + nt;
			sign_flag = 1;
		}
		else
		{
			sum = sum - nt;
			sign_flag = 0;
		}
		nt++;
		i++;
	}
	
	printf("%d", sum);
}