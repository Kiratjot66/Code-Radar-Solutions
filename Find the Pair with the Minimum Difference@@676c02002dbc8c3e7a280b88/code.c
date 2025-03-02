#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int t;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    int diff=arr[1]-arr[0];
    int n1=arr[0],n2=arr[1];
    for(int i=0;i<n-1;i++){
        int di=arr[i+1]-arr[i];
        if(di<diff){
            diff=di;
            n1=arr[i];
            n2=arr[i+1];
        }
    }
    printf("%d %d",n1,n2);
}