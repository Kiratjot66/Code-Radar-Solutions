#include <stdio.h>
int main() {
    int i,j,N;
    scanf("%d",&N);
    for(i=N;i>=1;i--){
        for(j=65;j<65+i;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}