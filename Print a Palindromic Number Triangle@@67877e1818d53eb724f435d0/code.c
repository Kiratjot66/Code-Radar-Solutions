#include <stdio.h>
int main() {
    int i,j,k,l,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(s=N;s>=1;s--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        for(k=j-1;k>=1;k--){
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}