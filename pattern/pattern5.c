#include <stdio.h>

int main()
{
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5-i; j++) {
            printf(" ");
        }
        int j;
        for(j=1; j<=i; j++) {
            printf("%d", j);
        }
        j-=2;
        while(j>0) {
            printf("%d", j);
            j--;
        }
        printf("\n");
    }
}