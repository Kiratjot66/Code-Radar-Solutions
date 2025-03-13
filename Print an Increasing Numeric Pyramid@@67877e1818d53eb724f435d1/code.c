#include <stdio.h>
int main() {
    int i,j,s,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(s=N-1;s>=1;s--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}