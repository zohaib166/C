/*resets all the bits except specified no of bits in the LSB*/
#include <stdio.h>

short resetbits(short x, short n);
int main()
{
    short x = 251;
    printf("%i", resetbits(x,4));
}

short resetbits(short x, short n)
{
    short mask = ~(~0 << n);
    //printf("mask %u\n", mask);

    return (x & mask);
}
