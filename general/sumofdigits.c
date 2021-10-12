#include <stdio.h>
int main()
{
    int num=3245;
    int sum=0;
    while(num>0)
    {
        sum = sum + num%10;
        num = num / 10;
    }
    printf("Sum: %d", sum);
}

