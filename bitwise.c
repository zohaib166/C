#include <stdio.h>
int main()
 {
   int HH, MM, SS;
   printf("Enter time in HH:MM:SS format:") ;
   scanf("%2d %*c %2d %*c %2d",&HH,&MM,&SS);
   if(HH<=12&&HH!=0)
   {
    printf("Time is 12 hour format ");
   }
    else if(HH<24||HH==0)
    {
     printf("Time is 24 hour format ");
    }
    else  
    { 
     printf("Time is invalid format ");
    }
     printf("\nThe entered timing is:");
     printf("%2d %2d %2d",HH,MM,SS);
     return 0;
    }