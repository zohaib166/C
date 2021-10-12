/*pn junction biasing*/
#include<stdio.h>
#define SIZE 20
int main()
{
	char arr[SIZE];
	int i;
	int start, end;
	//clrscr();
	printf("Enter the string containing p and n\n");
	scanf("%s", arr);
	printf("Entered string: \n");
	for(i=0; arr[i]!='\0'; i++)
	{
		printf("%c",arr[i]);
	}
	start = 0;
	end = i-1;
	while(start<end)
	{
		//printf("hi");
		while(arr[start]=='p' && start<end)
			start++;
		while(arr[end]=='n' && start<end)
			end--;

		if(start<end)
		{
			arr[start] = 'p';
			arr[end] = 'n';
			start++;
			end--;
		}
	}
	printf("\n");
	for(i=0; arr[i]!='\0'; i++)
	{
		printf("%c",arr[i]);
	}
	//getch();
}
