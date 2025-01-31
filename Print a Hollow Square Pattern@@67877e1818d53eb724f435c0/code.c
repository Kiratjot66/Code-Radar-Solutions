#include <stdio.h>
int main() {
    int i,j,k,l,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        printf("* ");
    }
    printf("\n");
    for(j=1;j<=N-2;j++){
        printf("* ");
        for(k=1;k<=N-2;k++){
            printf(" ");
        }
        printf("* ");
    }
    printf("\n");
    for(l=1;l<=N;l++){
        printf("* ");
    }
    return 0;
}