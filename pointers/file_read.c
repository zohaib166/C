#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fptr;
    char filename[15];
    char buff[10][255];

    printf("Enter the filename to be opened \n");
    scanf("%s", filename);
    /*  open the file for reading */
    fptr = fopen(filename, "r");
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }
    int i=0;
    for(i=0;i<10;i++)
    {
        fgets(buff[i], 255, (FILE*)fptr);
        printf("%s", buff[i]);
    }

    /*ch = fgetc(fptr);
    while (ch != EOF)
    {
        printf ("%c", ch);
        ch = fgetc(fptr);
    }*/
    fclose(fptr);
}
