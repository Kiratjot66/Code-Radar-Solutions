#include <stdio.h>
int main() {
    int N;   
    scanf("%d",&N);
    int arr[N];
    int k;
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    scanf("%d",&k);
    for(int j=N-k;j<N;j++){
        printf("%d ",arr[j]);
        printf("\n");
    }
    for(int l=0;l<N-k;l++){
        printf("%d ",arr[l]);
        printf("\n");
    }
    return 0;
}