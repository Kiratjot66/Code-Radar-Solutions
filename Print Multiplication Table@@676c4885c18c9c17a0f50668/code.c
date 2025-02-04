#include <stdio.h>
int main() {
    int i,j,N;
    scanf("%d",&N);
    for(i=1;i<=10;i++){
        j=i*N;
        printf("%d x %d = %d",N,i,j);
        printf("\n");
    }

    return 0;
}