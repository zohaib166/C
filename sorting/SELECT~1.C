#include <stdio.h>

void selection_sort(int*, int, int*);

int main()
{
	int i, a[10], length=10;
	int iter_count = 0;
	clrscr();
	printf("Enter 10 integers to be sorted:\n");
	for(i=0; i<length; i++)
		scanf("%d", &a[i]);

	printf("\nSorting............ \n");
	selection_sort(a, length, &iter_count);
	printf("\nSorted List: ");
	for(i=0; i<length; i++)
		printf("%d ", a[i]);

	printf("\nTotal Iterations=%d\n", iter_count);
	//free(a);
	getch();
	return 0;
}

int find_pos_smallest(int start, int *list, int length, int *O)
{
	int i=start, min, index;
	min = list[start];
	for(i=start; i<length; i++)
	{
		if(min>=list[i])
		{
			min=list[i];
			index=i;
			(*O)++;
		}
	}
	return index;
}

void selection_sort(int *list, int length, int *O)
{
	int i,j,temp,min;
	for(i=0;i<length;i++)
	{
		min = find_pos_smallest(i, list, length, O);  //find the smallest element in the array
		temp = list[min];	//replace it with current element in the sorted list
		list[min] = list[i];
		list[i] = temp;
		(*O)++;
		//printf("O: %d", *O);
	}
}