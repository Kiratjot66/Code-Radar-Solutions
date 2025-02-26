#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[N],ar[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int b=0;
    int g=arr[0];
    for(int p=0;p<N;p++){
        if(arr[p]==g){
          b++;
        }
    }
    if(b==N){
        printf("-1");
        return 0;
    }
    int f=arr[0];
    for(int j=0;j<N;j++){
        if(arr[j]>f){
          f=arr[j];
        }
    }
    for(int c=0;c<N;c++){
        if(arr[c]!=f){
            ar[c]=arr[j];
        }
    }
    int a=ar[0];
    for(int k=1;k<N;k++){
        if(ar[k]>a){
            a=ar[k];
        }
    }
    printf("%d",a);
}