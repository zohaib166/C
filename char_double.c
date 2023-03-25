#include<stdio.h>
int main()
{
    int i;
    long double j;
    char a ,b;
    printf("Enter the one integer \n");
    scanf("%d",&i);


    printf("Enter the one long double \n");
    scanf("%Lf",&j);

    fflush(stdin);
    printf("Enter the two character\n");

    scanf("%c",&a);
    fflush(stdin);
    scanf("%c",&b);

    printf(" The integer is %d\n",i);
    printf(" The character 1 is: %c\n",a);
    printf(" The character 2 is: %c\n",b);
    printf(" The long double  is %Lf\n",j);


    printf("The value of long double is %Lf\n",j);
    printf("%c %c", a,b);

    return 0;
}