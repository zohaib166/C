#include <stdio.h>

int main()
{
	int num =15;
	long term0 = 0;
	long term1 = 1;
	long term2=0;
	int i=0;
	//printf("%d,%d,",term0, term1);
	if(num < 20)
	{
		while(i<num)
		{
			printf("%ld,", term0);
			term2 = term0 + term1;
			term0 = term1;
			term1 = term2;
			i++;
		}
	}
	else
		printf("Too long series\n");
    return 0;
}
