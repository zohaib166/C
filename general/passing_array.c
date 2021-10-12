/*Find the largest element in an array*/
#include <stdio.h>
void fill_array(int*,int);
int max_array(int *,int);
int main()
{
    int num[50], size=5;
    int *ptr,max;
    ptr=num;
    int i;
    fill_array(ptr, size);
    max = max_array(ptr,size);
    printf("maximum number is: %d",max);
}

int max_array(int *p, int range)
{
    int max=*p;
    int i;

    for(i=0;i<range-1;i++)
    {
        p++;
        if(max<*p)
        {
            max = *p;
        }
    }
    return max;

}
void fill_array(int *p, int range)
{
    int i;
    //int a[50];
    printf("Enter %d elements one by one\n",range);
    for(i=0;i<range;i++)
    {
        scanf("%d",p);
        //printf("value taken: %d",*p);
        p++;
    }
}
