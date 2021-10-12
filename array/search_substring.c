/*Get the position of the first occurrence of a sub-string in a string*/
#include <stdio.h>
#include <string.h>
int main()
{
	char str1[21];
	char str2[11];

	int len1;
	int len2;
	short int i=0,j=0,flag = 0;
	short location, count = 0;
	//clrscr();
	//printf("%d", i);
	printf("Enter a string(20 characters max)\n");
	scanf("%s", str1);
	printf("Enter a substring(10 characters max)\n");
	scanf("%s", str2);
	len1 = strlen(str1);
	len2 = strlen(str2);
	while(i<len1)
	{
		j=0;
		count = 0;
		//flag = 0;
		while(str1[i] == str2[j] && i<len1 && j<len2)
		{
			//printf("Im here\n");
			i++; j++;
			count++;
		}
		//printf("count=%d\n", count);
		if(count == len2)
		{
			location = i-len2+1;
			flag = 1;
			break;
		}
		else
		{
			flag=0;
			i++;
		}
		//printf("flag=%d\n", flag);
	}

	if(flag ==1)
		printf("Substring is present at position - %d\n", location);
	else
		printf("Substring is not present\n");
	//getch();
}
