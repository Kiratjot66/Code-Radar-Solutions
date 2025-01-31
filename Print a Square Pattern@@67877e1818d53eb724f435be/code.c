#include <stdio.h>
int main() {
    int i,j,k,f,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        printf("* ");
    }
    printf("\n");
    for(j=1;j<=N;j++){
        printf("* ");
        for(k=1;k<=N-2;k++){
            printf(" ");
        }
        printf("* ");
    }
    printf("\n");
    for(f=1;f<=N;f++){
        printf("* ");
    }
    return 0;
}