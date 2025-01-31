#include <stdio.h>
int main() {
    int i,j,k,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(j=4;j>=i;j--){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}