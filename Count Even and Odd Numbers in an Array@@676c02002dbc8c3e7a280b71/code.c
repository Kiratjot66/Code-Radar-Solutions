#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for (int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int a=0,d=0;
    for(int j=0;j<N;j++){
        if(arr[j]%2==0){
            a=a+1;
        }
        else{
            d=d+1;
        }
    }
    printf("%d %d",a,d);

    return 0;
}