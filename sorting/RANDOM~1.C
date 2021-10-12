#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *generate_random(int, int, int);

int *generate_random(int start, int stop, int size)
{
	int i,j=0;
	time_t t;
	int *arr;
	srand((unsigned) time (&t));
	arr = (int*) malloc(sizeof(int)*size);
	while(j<size)
	{
		arr[j] = rand()%stop+start;
		j++;
	}
	return arr;
}