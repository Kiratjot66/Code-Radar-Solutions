#include <stdio.h>

int main() {
    int i,j,k,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(j=1;j<=i;j++){
            printf("* ");
        }
    }
    return 0;
}