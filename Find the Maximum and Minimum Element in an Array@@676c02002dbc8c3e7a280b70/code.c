#include <stdio.h>
int main() {
    int N;
    scnaf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    printf("\n");
    int a=arr[0],b=arr[0];
    for(int j=1;j<N;j++){
        if(a>arr[j]){
            a=arr[j];
        }
    }
    printf("%d ",a);
    for(int k=1;k<N;k++){
        if(b<arr[k]){
            b=arr[k];
        }
    }
    printf("%d",b);
    
    return 0;
}