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
    int b=arr[0];
    for(int k=0;k<N;k++){
        if(b<arr[k] && arr[k]!=a &&b!=arr[k]){
            b=arr[k];
        }
        else{
            printf("-1");
        }
    }
    printf("%d",b);
    return 0;
}