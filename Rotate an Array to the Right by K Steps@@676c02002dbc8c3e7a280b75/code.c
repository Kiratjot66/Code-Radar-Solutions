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
    if(k>N){
        k=k-N;
    }
    for(int j=N-k;j<N;j++){
        printf("%d ",arr[j]);
    }
    for(int l=0;l<N-k;l++){
        printf("%d ",arr[l]);
    }
    return 0;
}