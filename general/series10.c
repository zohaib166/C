//1 + x^3/3! + x^5/5! + ………….xn/n!
#include <stdio.h>
int main()
{
    int i=0, N, X;
    float nt = 1.0;
    scanf("%d", &X);
    scanf("%d", &N);
    float sum = 0.0;
    if(N==1) {
        printf("1 ");
        return 0;
    }

    int num = X, den = 1, temp = 2;
    sum = 1.0;
    while(i < N) {
        num = num * X * X;
        den = den * temp * (temp+1);
        printf("%.3f ", nt);
        sum = sum + nt;
        nt = num/(float)den;
        temp = temp + 2;
        i++;
    }
    printf("\n%f", sum);
}