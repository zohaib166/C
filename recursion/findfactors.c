#include <stdio.h>

int printFactors_checkPrime(int num, int i)
{
    static int count = 0;
    if (i <= num)
    {
        if (num % i == 0)
        {
            printf("%d, ", i);
            num /= i;
            count++;
        }
        printFactors_checkPrime(num, i + 1);
    }
    return count;
    
}
int main()
{
    int flag = printFactors_checkPrime(19, 1);
    if(flag==2) printf("\nThe number is prime");
}