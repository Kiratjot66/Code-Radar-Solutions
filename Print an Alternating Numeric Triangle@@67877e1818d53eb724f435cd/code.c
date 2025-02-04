#include <stdio.h>
int main() {
    int i,j,N,m=1,l=0,c,d;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(j=1;j<=i;j++){
            printf("%d ",m);
            c=l;
            l=m;
            m=c;
        }
        printf("\n");
        d=l,l=m,m=d;
    }
    return 0;
}