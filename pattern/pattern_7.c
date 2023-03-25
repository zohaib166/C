// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
#include <stdio.h>
int main() {
    int i,j,num;
    scanf("%d", &num);
    for(i=0;i<num;i++) {
        for(j=0;j<=i;j++) {
            printf("%d ",i+1);
        }
        printf("\n");
    }
}
