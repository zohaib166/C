//1+x+x^2+x^3+x^4+....
#include <stdio.h>

int main() 
{
    int nt = 1, N, X, i=0, sum = 0;
    scanf("%d", &X);
    scanf("%d", &N);
    if(N == 1) { 
        printf("1 ");
        return 0;
    }
    while (i<N)
    {
        printf("%d ", nt);
        sum = sum + nt;
        nt = nt * X;
        i++;
    }
    
}