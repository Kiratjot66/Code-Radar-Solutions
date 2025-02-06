#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    int fr[1000]={0};
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<N;j++){
        fr[arr[j]]++;
    }
    for(int j=0;j<N;j++){
        if(fr[arr[j]]!=0){
            printf("%d %d\n",arr[j],fr[arr[j]]);
            fr[arr[j]]=0;
        }
    }
    return 0;
}