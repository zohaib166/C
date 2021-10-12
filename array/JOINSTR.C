/*Join or concatenate two strings.*/
#include<stdio.h>
int main()
{
	char str1[20];
	char str2[20];
	printf("Enter first String\n");
	scanf("%s",str1);
	printf("Enter second String\n");
	scanf("%s",str2);
	int i,j;
	for(i=0; str1[i]!='\0'; i++);
	for(j=0; str2[j]!='\0'; j++)
	{
		str1[i] = str2[j];
		i++;
	}
	str1[i] = '\0';
	printf("Concatenated String is: %s", str1);
}
