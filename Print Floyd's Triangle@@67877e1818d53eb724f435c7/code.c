#include <stdio.h>
int main() {
    int i,j,k,m=1,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(j=1;j<=i;j++){
            printf("%d ",m);
            m++;
        }
        printf("\n");
    }
    return 0;
}