#include <stdio.h>

int main() {
    int i,j,l,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(j=65;j<65+i;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}