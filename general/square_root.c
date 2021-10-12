#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int i=0, j=0;
	int accuracy=6;
	int num = 21;
	int quotient, remainder, divisor, frac;
	quotient = remainder = divisor = frac = 0;
	char *ans = malloc(sizeof(char)*10);
	while(i*i<=num)
	{
		i++;
	}
	i--;
	divisor = quotient = i;
	remainder = num-(i*i);
	sprintf(ans, "%d", quotient);

	ans = strcat(ans, ".");
	char *temp = malloc(sizeof(char)*10);
	frac = quotient;
	i=0;j=0;
	while(accuracy>0)
	{

		divisor = (divisor+frac)*10;
		remainder = remainder*100;

		while((divisor+j)*j<=remainder)
		{
			j++;
		}
		j--;
		frac = remainder/(divisor+j);
		remainder = remainder%(divisor+j);
		sprintf(temp, "%d", frac);
		ans = strcat(ans, temp);
		accuracy--;
	}
	printf("%s", ans);
}
