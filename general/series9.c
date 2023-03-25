//1 + x^2/2! + x^4/4! + ………….x/n!
#include <stdio.h>
int main()
{
    int i=0, sum = 0, N, X;
    float nt = 1.0;
    scanf("%d", &X);
    scanf("%d", &N);

    if(N==1) {
        printf("1 ");
        return 0;
    }
    int num = 1, den = 1, temp = 1;
    while(i < N) {
        printf("%.3f ", nt);
        sum = sum + nt;
        num = num * X * X;
        den = den * temp * (temp+1);
        nt = num/(float)den;
        temp = temp + 2;
        i++;
    }
}