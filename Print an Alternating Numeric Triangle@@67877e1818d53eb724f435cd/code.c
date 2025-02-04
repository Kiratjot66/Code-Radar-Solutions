#include <stdio.h>
int main() {
    int i,j,N,m,l,c,d;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        if(i%2!=0 ||i==1){
            m=1,l=0;
        }
        else{
            m=0,l=1;
        }
        for(j=1;j<=i;j++){
            printf("%d ",m);
            c=l;
            l=m;
            m=c;
        }
        printf("\n");
    }
    return 0;
}