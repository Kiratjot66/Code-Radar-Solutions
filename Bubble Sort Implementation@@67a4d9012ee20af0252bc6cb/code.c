#include <stdio.h>
void bubbleSort(int arr[],int n){
    int t;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            t=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=t;
        }
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,n);
    printArray(arr,n);
}