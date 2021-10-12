#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
   time_t t;
    srand((unsigned) time (&t));
   int number_to_guess = rand() % 10;

   printf("%d ",number_to_guess);

}
