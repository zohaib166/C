#include <stdio.h>
int main() {
    int lower,upper,i=0,j=1;
    scanf("%d%d",&lower,&upper);
    for(i=lower;i<=upper;i++) {
        for(j=1;j<10;j++) {
            printf("%5d",i*j);
        }
        printf("\n");
    }
}
