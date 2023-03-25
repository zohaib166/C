#include <stdio.h>
int main()
{
    int freq[26] = {0};
    char str[100];
    printf("Enter a sentence to get the letter frequency\n");
    scanf("%[^\n]s", str);
    printf("%s\n", str);
    int i=0;
    while (str[i]!='\0') {
        if(str[i]>='a' && str[i]<='z') {
            freq[str[i]-'a']++;
        }
        i++;
    }
    for(int i=0;i<26;i++) {
        if(freq[i]!=0)
        printf("%c: %d\n", i+'a', freq[i]);
    }
}