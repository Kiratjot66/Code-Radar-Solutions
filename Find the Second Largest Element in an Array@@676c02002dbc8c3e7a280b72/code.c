#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int a=arr[0];
    for(int j=1;j<N;j++){
        if(a<arr[j]){
            a=arr[j];
        }
    }
    int b=-1;
    for(int k=0;k<N;k++){
        if(a>arr[k] &&arr[k]>b){
            b=arr[k];
        }
    }
    printf("%d",b);
    return 0;
}