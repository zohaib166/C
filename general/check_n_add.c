#include <stdio.h>
#include <string.h>

short is_integer(char *str);

void main()
{
    char a[5],b[5];
    short ans=0;
    short check1, check2;
    scanf("%s", a);
    scanf("%s", b);
    check1 = is_integer(a);
    check2 = is_integer(b);
    if(check1!=0 && check2!=0)
    {
        printf("%d\n",check1+check2);
    }
    else
    {
        printf("Invalid input");
    }
}

short is_integer(char *str)
{
    short i,ans;
    ans = 0;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            ans = ans*10 + str[i]-48;
        }
        else
        {
            ans = 0;
            break;
        }
    }
    return ans;
}

