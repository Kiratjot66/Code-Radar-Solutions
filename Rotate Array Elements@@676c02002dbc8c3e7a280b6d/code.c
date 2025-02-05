#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[],i,l;
    for(i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for(j=N-k;j<N;j++){
        printf("%d",arr[j]);
        printf("\n");
    }
    for(l=0;l<=k;l++){
        printf("%d",arr[l]);
        printf("\n");
    }
    return 0;
}