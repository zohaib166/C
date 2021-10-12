#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int *binaryStr2IntArray(char *bin) 
{
	char *ptr;
	int *num;
	int length, i=0;
	//printf("hi");
	if(bin!=NULL) 
	{
		//printf("hi2");
		length = strlen(bin);
		ptr=bin;
		num = (int *) malloc(sizeof(int)*length);
		while(*ptr!='\0')
		{
			//printf("hi3");
			*(num+i) = (int)*ptr-48;
			i++;
			ptr++;
		}
		return num;
	}
	else
		return NULL;
}
void main() {
	char *x = "01101101";
	//printf("%d", strlen(x));
	int *y = (int *) malloc(sizeof(int)*strlen(x)); 
	y = binaryStr2IntArray(x);
	int i=0;
	if(y!=NULL)
	for(i=0; i<strlen(x); i++)
		printf("%d", *(y+i));
}
