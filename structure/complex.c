#include <stdio.h>
#include <math.h>
typedef struct complex
{
    int real;
    int imag;
} CPLX;
CPLX add(CPLX, CPLX);
CPLX subtract(CPLX, CPLX);
CPLX multiply(CPLX, CPLX);
int main()
{
    CPLX a,b,ans;
    printf("Enter the first number\n");
    scanf("%d%d",&a.real,&a.imag);
    printf("Enter the second number\n");
    scanf("%d%d",&b.real,&b.imag);
    ans = add(a,b);
    printf("Addition=%d+j%d\n",ans.real,ans.imag);
    ans = subtract(a,b);
    printf("Subtraction=%d+j%d\n",ans.real,ans.imag);
    ans = multiply(a,b);
    printf("Multiplication=%d+j%d\n",ans.real,ans.imag);
}

CPLX add(CPLX x, CPLX y)
{
    CPLX ans;
    ans.real = x.real+y.real;
    ans.imag = x.imag+y.imag;
    return ans;
}

CPLX subtract(CPLX x, CPLX y)
{
    CPLX ans;
    ans.real = x.real-y.real;
    ans.imag = x.imag-y.imag;
    return ans;
}

CPLX multiply(CPLX x, CPLX y)
{
    CPLX ans;
    ans.real = (x.real*y.real)-(x.imag*y.imag);
    ans.imag = (x.real*y.imag)+(y.real*x.imag);
    return ans;
}

