/*Count the number of vowels in a string*/
#include<stdio.h>
int main()
{
	char str[50] = "mathematical";
	int vowel_count, i = 0;
	while(str[i++]!='\0') {
        switch(str[i]) {
            case 'o':
            case 'O':
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'u':
            case 'U':
                vowel_count++;
                break;
        }
    }
    printf("Vowel Count: %d\n", vowel_count);
}
