#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int f=arr[0];
    int s=-1;
    for(int j=0;j<N;j++){
        if(arr[i]>f){
          s=f;
          f=arr[j];
        }
        else if(arr[i]>s && arr[i]!=f){
          s=arr[i];
        }
    }
    printf("s");
    return 0;
}