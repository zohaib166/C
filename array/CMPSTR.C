/*compare if two string are identical*/
#include <stdio.h>
int main()
{
	char str1[20] = "qwerty";
	char str2[20] = "qwerty";
	int i,flag=0;
	for(i=0; str1[i]!='\0' || str2[i]!='\0'; i++)
	{
		if(str1[i] != str2[i])
		{
			flag = 1;
			break;
		}
	}
	if(flag==0)
		printf("Strings are identical\n");
	else
		printf("Strings are different\n");
}
