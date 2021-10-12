#include <stdio.h>
void main()
{
	char str1[20]="hello";
	char str2[20]="adios";
	int cmp = 0;
	char *ptr1, *ptr2;
	clrscr();
	ptr1 = str1;
	ptr2 = str2;

	while(*ptr1 == *ptr2)
	{
		if(*ptr1=='\0' || *ptr2=='\0')
		{
			break;
		}
		ptr1++; ptr2++;
	}
	cmp = *ptr1 - *ptr2;
	printf("Comparison result: %d", cmp);
	getch();
}

