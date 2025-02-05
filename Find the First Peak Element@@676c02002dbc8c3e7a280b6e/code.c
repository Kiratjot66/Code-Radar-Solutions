#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    for(int s=0;s<N;s++){
        if(arr[s-1]<arr[s] &&arr[s]>arr[s+1]){
            printf("%d",arr[s]);
            break;
        }
    }
    return 0;
}