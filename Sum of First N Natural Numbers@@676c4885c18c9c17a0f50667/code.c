#include <stdio.h>
int main() {
    int i,s=0,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        s=s+i;
    }
    printf("%d",s);
    return 0;
}