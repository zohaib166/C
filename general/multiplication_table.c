#include <stdio.h>
# define START 13
#define STOP 19

int main()
{
	int i=START;
	int j;
	while(i <= STOP)
	{
		j=1;
		while(j<=10)
		{
			printf("%4d", i*j);
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}