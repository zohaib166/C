#include <stdio.h>

void shell_sort(int*, int, int*);

int main()
{
	int i, a[10], length=10;
	int iter_count = 0;
	
	printf("Enter 10 integers to be sorted:\n");
	for(i=0; i<length; i++)
		scanf("%d", &a[i]);

	printf("\nSorting............ \n");
	shell_sort(a, length, &iter_count);
	printf("\nSorted List: ");
	for(i=0; i<length; i++)
		printf("%d ", a[i]);

	printf("\nTotal Iterations=%d\n", iter_count);

	return 0;
}
void shell_sort(int *list, int length, int *O)
{
	register int i,j,k;
	int temp, gap, a[5];
	a[0] = 9; a[1] = 5; a[2] = 3; a[3] = 2; a[4] = 1; //setting gaps for sorting
	for(k=0; k<5; k++)  //incrementing gaps
	{
		gap = a[k];
		for(i=gap; i<length; i++)   //loop for a gap
		{
			temp = list[i];
			for(j=i-gap; (temp<list[j]) && (j>=0); j=j-gap) //exchanging elements between decided gaps
			{
				list[j+gap] = list[j];
				(*O)++;
			}
			list[j+gap] = temp;
		}
	}
}