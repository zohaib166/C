/*resets the specified no of bits in the given position*/
#include <stdio.h>

short resetbitspos(short x, short p, short n);
int main()
{
    short int x = 251;
    printf("%u", resetbitspos(x,5,3));
}

short resetbitspos(short x, short p, short n)
{
    short mask = ~(~0 << n);
    mask = mask << (p+1-n);

    return (x & ~mask);

}
