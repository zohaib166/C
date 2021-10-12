#include <stdio.h>
int main()
{
	int z = 5;
	int *ptr;
	char *cptr;
	ptr = &z;
	printf("Value pointed by ptr is %d\n", *ptr);
	printf("Address of x: %p\n",&z);
	printf("%d %d", sizeof(ptr), sizeof(cptr));
}

