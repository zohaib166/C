#include <stdio.h>

void bubble_sort(int*, int, int*);

int main()
{
	int i, a[10], length=10;
	int iter_count = 0;
	clrscr();
	printf("Enter 10 integers to be sorted:\n");
	for(i=0; i<length; i++)
		scanf("%d", &a[i]);

	printf("\nSorting............ \n");
	bubble_sort(a, length, &iter_count);
	printf("\nSorted List: ");
	for(i=0; i<length; i++)
		printf("%d ", a[i]);

	printf("\nTotal Iterations=%d\n", iter_count);
	//free(a);
	getch();
	return 0;
}
void bubble_sort(int *list, int size, int *O)
{
	int i,j,temp;
	for(i=0; i<size; i++)
	{
		for(j=0; j<size-1; j++)
		{
			if(list[j] > list[j+1])
			{
				temp = list[j];
				list[j] = list[j+1];
				list[j+1] = temp;
				(*O)++;
			}
		}
	}
}