#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<N;j++){
        int a=0;
        for(int k=0;k<N;k++){
            if(arr[j]==arr[k]){
                a=a+1;
            }
        }
    }
        printf("%d %d",arr[j],a);
        printf("\n");
    return 0;
}