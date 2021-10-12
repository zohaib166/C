/*returns n bit sequence starting from position p*/
#include <stdio.h>

unsigned short int getbits(short int x,int p,int n);
int main()
{
    short int x = 77;
    printf("%u", getbits(x,7,5));
}

unsigned short int getbits(short int x,int p,int n)
{
    return (x >> (p+1-n)) & ~(~0 << n);
}
