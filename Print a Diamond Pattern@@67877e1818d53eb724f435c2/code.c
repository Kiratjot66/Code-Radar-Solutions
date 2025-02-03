#include <stdio.h>
int main() {
    int i,j,s,k,l,N,m;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(s=N-i;s>=1;s--){
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }
    for(k=N-1;k>=1;k--){
        for(l=1;l<=N-k;l++){
            printf(" ");
        }
        for(m=1;m<=2*k-1;m++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}