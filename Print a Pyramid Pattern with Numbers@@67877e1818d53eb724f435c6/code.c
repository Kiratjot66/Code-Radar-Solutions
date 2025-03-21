#include <stdio.h>
int main() {
    int i,j,k,l,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(l=2*N-1;l>=1;l--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf(" %d ",j);
        }
        printf("\n");
    }
    return 0;
}