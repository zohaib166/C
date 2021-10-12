#include <stdio.h>
int main()
{
    int year=2400;

    if(year%400==0)
    {
        printf("The year is leap");
    }
    else if(year%100==0)
    {
        printf("The year is not leap");
    }
    else if(year%4==0)
    {
        printf("The year is leap");
    }
    else
    {
        printf("The year is not leap");
    }
}
