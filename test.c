#include <stdio.h>

int main()
{
    int x = 0;
    printf("%d\n", 1 + (x>>31) - (-x>>31));
    printf("%d", x<0 ? 0 : x>0 ? 2 : 1 );
}
