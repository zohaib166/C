#include <stdio.h>
int *str2numarray(char*);
int main()
{
    int *num;
    int i;
    char *s = "34 23 12 21";
    if(s!=NULL)
        num = str2numarray(s);
    else
        printf("Please enter a valid string (ex: 10 3)\n");
    for(i=0;i<4;i++)
    {
        printf("%d ",*(num+i));
    }
    return 0;
}

int *str2numarray(char *str)
{
    static int num[30]={0};
    char *chptr;
    int i=0;
    chptr = str;

    while(*chptr!='\0')
    {
        while(*chptr!=' ' && *chptr!='\0')
        {
            num[i]=num[i]*10+((*chptr)-48);
            //printf("character: %c\n",*chptr);
            chptr++;

        }
        i++;
        if(*chptr==' ')
            chptr++;
    }

    return num;
}
