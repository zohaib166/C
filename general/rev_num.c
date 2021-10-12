
/*reverses the digits of a given number*/
#include <stdio.h>

int main()
{
	int num = 23451;
	int temp=num;
	int rev_num=0;
	while(temp>0)
	{
		rev_num=rev_num*10+temp%10;
		temp=temp/10;
	}
	printf("%d reversed to make %d",num,rev_num);
}
