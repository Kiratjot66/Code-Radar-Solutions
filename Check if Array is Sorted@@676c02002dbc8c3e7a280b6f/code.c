#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[N],g=0;
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int a=arr[0];
    for(int k=1;k<N;k++){
        if(arr[0]>arr[k]){
           g++;
        }
    }
    if(g>0){
        printf("Not Sorted");
    }
    else{
        printf("Sorted");
    }
    return 0;
}