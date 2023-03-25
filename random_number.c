#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *generate_random(int start, int stop, int size)
{
	int i,j=0;
	srand((unsigned) time (NULL));
	int *arr = (int*) malloc(sizeof(int)*size);
	while(j<size)
	{
		arr[j] = rand()%stop+start;
		j++;
	}
	return arr;
}

int main() {
	int *arr;
	arr = generate_random(4,10,10);
	for(int i=0;i<10;i++) {
		printf("%d ", arr[i]);
	}
}