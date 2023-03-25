// 1
// 1 2
// 1   3
// 1     4
// 1 2 3 4 5
#include <stdio.h>
int main() {
    int i,j,num;
    scanf("%d", &num);
    for(i=1;i<=num;i++) {
        for(j=1;j<=i;j++) {
            if(j==1 || i==j || i==1 || i==num)
                printf("%d ",j);
            else 
                printf("  ");
        }
        printf("\n");
    }
}
