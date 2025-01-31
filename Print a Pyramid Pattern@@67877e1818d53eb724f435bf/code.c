#include <stdio.h>
int main() {
    int i,j,k,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(k=1;k<=N-1;k++){
            printf("");
        }
        for(j=1;j<=(2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}