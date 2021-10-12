int str2num(char *);
int str2num(char *nstr)
{
    int num=0;
    char *p;
    p=nstr;
    while(*p != '\0')
    {
        num = num * 10 + (*p - 48);
        p++;
    }
    return num;
}
