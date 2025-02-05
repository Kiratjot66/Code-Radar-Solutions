#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    for(int s=0;s<N;s++){
        if(s==N-1){
            arr[s+1]=arr[0];
        }
        if(s==0){
            arr[0]==arr[N-1];
        }
        if(arr[s-1]<arr[s] &&arr[s]>arr[s+1]){
            printf("%d",arr[s]);
            break;
        }
    }
    return 0;
}