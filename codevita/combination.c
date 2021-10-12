#include <string.h>
#include <stdio.h>
int str2num(char *);
long fact(int);
long combination(int, int);
int main()
{
   char str[10];
   const char s[2] = " ";
   char *token;
   gets(str);
   int n,k,i;
   long  sum=0;
   token = strtok(str, s);
   //printf("%s",token);

   if( token != NULL )
   {
      n = str2num(token);
      token = strtok(NULL, s);
      k = str2num(token);
   }
    printf("n:%d k: %d",n,k);
   if(k%2!=0) k--;
   printf("fact: %ld", fact(n));
   if(n>=k)
   {
       for(i=0; i<=k; i=i+2)
       {
           sum = sum + combination(n,i);
           //printf("term: %ld\n", sum);
       }
       printf("Final Sum: %ld\n", sum);
   }
   else
   {
       printf("Invalid input");
   }

   return 0;
}

long combination(int n, int k)
{
    long comb = 0.0f;
    int temp = n-k;
    printf("temp:%ld",fact(temp));
    int temp2 = fact(k)*fact(temp);
    comb = fact(n)/temp2;

    return comb;
}

long fact(int n)
{
    long f=1;
    int i=1;
    if(n==0)
        return 1;
    while(i<=n)
    {
        f=f*i;
        i++;
        //printf("ans: %ld",f);
    }
    return f;
}

int str2num(char *nstr)
{
    int num=0;
    char *p;
    //printf("num: %s",nstr);
    p=nstr;
    while(*p != '\0')
    {
        //printf("here");

        num = num * 10 + ((*p) - 48);
        p++;
    }
    return num;
}


