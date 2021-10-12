#include <string.h>
#include <stdio.h>

int main()
{
   char str[80] = "34 5";
   const char s[2] = " ";
   char *token;

   /* get the first token */
   token = strtok(str, s);

   /* walk through other tokens */
   while( token != NULL )
   {
      printf( "%s\n", token );

      token = strtok(NULL, s);
   }

   return(0);
}

//char * strtoken(char* str, const char* delim)
//{
//
//}

