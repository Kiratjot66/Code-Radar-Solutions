#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[],a=0;
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int a=arr[0];
    for(int i;i<N;i++){
        if(arr[0]>arr[i]){
           a++;
        }
    }
    if(a>0){
        printf("Not Sorted");
    }
    else{
        printf("Sorted");
    }
    return 0;
}