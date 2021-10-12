#include <stdio.h>
int main()
{
    char choice;
    int a,b;
    printf("choose an operation(+,-,*,/)\n");
    scanf("%c",&choice);

    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);

    switch(choice)
    {
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a*b);
            break;
        case '/':
            printf("%d",a/b);
            break;
        default:
            printf("Enter a valid operation");
    }
    return 0;

}
