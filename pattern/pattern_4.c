//     *
//    * *
//   * * *
//  * * * *
// * * * * *
#include <stdio.h>
int main() {
    int i,j,num;
    scanf("%d", &num);
    for(i=0;i<num;i++) {
        for(j=0;j<num-i-1;j++) { //spaces logic
            printf(" ");
        }
        for(j=0;j<=i;j++) { //star logic
            printf("* ");
        }
        printf("\n");
    }
}
