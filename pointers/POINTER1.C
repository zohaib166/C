/* accessing an array using pointer */
#include <stdio.h>

int main()
{
	int arr[10];
	int *ptr;
	int i;
	ptr = arr;
	//clrscr();
	for(i=0; i<10; i++)
	{
		scanf("%d", ptr+i);
	}
	ptr = arr;
	for(i=0; i<10; i++)
	{
		printf("%3d",*(ptr+i));
	}
	//getch();
}
