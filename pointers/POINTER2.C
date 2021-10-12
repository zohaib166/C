#include <stdio.h>

int main()
{
	char str[50] = "Czechoslovakia";
	char *cp;
	char ch;
	int count=0;
	cp = str;
	//clrscr();
	printf("Enter a character: ");
	scanf("%c", &ch);
	while(*cp != '\0')
	{
		if(*cp==ch)
		{
			count++;
		}
		cp++;
	}
	if(count==0)
		printf("%c does not occur in the given word\n", ch);
	else if(count > 0)
		printf("%c occur %d times in the given word\n",ch , count);
	//getch();
}

