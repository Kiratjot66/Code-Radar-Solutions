#include <stdio.h>
char mode;
int findOccurence(int arr[],int n,int target){
    if(mode=='F'){
        for(int i=0;i<n;i++){
            if(arr[i]==target){
                return i;
            }
        }
    }
    else{
        for(int i=n-1;i>=0;i--){
            if(arr[i]==target){
                return i;
            }
        }
    }
}
int main(){
    int n,target;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    scanf(" %c",&mode);
    int result=findOccurence(arr,n,target);
    printf("%d\n",result);
    return 0;
}