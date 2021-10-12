/*
 * C program to read in four integer numbers into an array and find the
 * average of largest two of the given numbers without sorting the array.
 * The program should output the given four numbers and the average.
 */
#include <stdio.h>
#define MAX 10

int main()
{
	int array[MAX], i, largest1, largest2, temp;
	printf("Enter %d integer numbers \n", MAX);
	for (i = 0; i < MAX; i++)
	{
		scanf("%d", &array[i]);
	}

	printf("Input integer are \n");
	for (i = 0; i < MAX; i++)
	{
	  printf("%5d", array[i]);
	}
	printf("\n");
	/*  assume first element of array is the first largest*/
	largest1 = array[0];
	/*  assume first element of array is the second largest */
	largest2 = array[1];
	if (largest1 < largest2)
	{
		temp = largest1;
		largest1 = largest2;
		largest2 = temp;
	}
	for (i = 2; i < MAX;	i++)
	{
		if (array[i] >= largest1)
		{
			largest2 = largest1;
			largest1 = array[i];
		}
		else if (array[i] > largest2)
		{
			largest2 = array[i];
		}
	}
	printf("\n%d is the first largest \n", largest1);
	printf("%d is the second largest \n", largest2);
	printf("\nAverage of %d and %d = %.2f \n", largest1, largest2, (largest1 + largest2) / 10.0f);
}
