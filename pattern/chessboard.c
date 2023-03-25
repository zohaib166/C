#include<stdio.h>
int main()
{
    short int i=1,j,k=1,x=1;
    while(x<=4)
    {
        k=1;
        while(k<=2)
        {
            i=1;
           while(i<=4)
            {
                j=1;
                while(j<=2)
                {
                    printf("#");
                    j++;
                }
                j=1;
                while(j<=2)
                {
                    printf(" ");
                    j++;
                }

                i++;
            }
            printf("\n");
            k++;
        }
        k=1;
        while(k<=2)
        {
            i=1;
           while(i<=4)
            {
                j=1;
                while(j<=2)
                {
                    printf(" ");
                    j++;
                }
                j=1;
                while(j<=2)
                {
                    printf("#");
                    j++;
                }


                i++;
            }
            printf("\n");
            k++;
        }
        x++;
    }
}
