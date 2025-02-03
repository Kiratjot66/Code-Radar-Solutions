#include <stdio.h>
int main() {
    int i,j,s,k,l,N,m;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(s=N-1;s>=1;s--){
            printf(" ");
        }
        for(j=1;j<=(2i-1);j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for(k=N-1;k>=1;k--){
        for(l=k;l>=1;l--){
            printf(" ");
        }
        for(m=1;m<=2k-1;m++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}