#include <stdio.h>

void swap(int *, int, int);
void quick_sort(int *, int, int *);
void qs(int *, int, int, int *);

int main()
{
	int i, a[10], length=10;
	int iter_count = 0;
	printf("Enter 10 integers to be sorted:\n");
	for(i=0; i<length; i++)
		scanf("%d", &a[i]);

	printf("\nSorting............ \n");
	quick_sort(a, length, &iter_count);
	printf("\nSorted List: ");
	for(i=0; i<length; i++)
		printf("%d ", a[i]);

	printf("\nTotal Iterations=%d\n", iter_count);
	return 0;
}

void swap(int *arr, int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void quick_sort(int *arr, int count, int *O)
{
	qs(arr, 0, count-1, O);
}

void qs(int *arr, int left, int right, int *O)
{
	register int i, j;
	int pivot, temp;
	i = left; j = right;
	pivot = arr[(left+right)/2];
	do
	{
		while((arr[i]<pivot) && (i<right)) i++;
		while((arr[j]>pivot) && (j>left)) j--;

		if(i<=j)
		{
			swap(arr, i, j);
			i++, j--;
			(*O)++;
		}
	} while(i<=j);
	if(left<j) qs(arr, left, j, O);
	if(i<right) qs(arr, i, right, O);
}