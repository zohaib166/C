#include <stdio.h>
int main()
{
    int N,i=2;
    printf("Enter a number");
    scanf("%d",&N);
    if(N<2)
    {
        printf("The number is invalid\n");
        return 1;
    }
    while(i!=N/2)
    {
        if(N%i==0)
        {
            printf("The number is not prime");
            break;
        }
        i++;
    }
    if(i>=N/2)
        printf("The number is prime");
    return 0;
}
