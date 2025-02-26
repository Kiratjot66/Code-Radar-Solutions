#include <stdio.h>
int main(){
    int n,h,q,d;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k=a[0];
    for(int j=0;j<n-1;j++){
        if(a[j]>a[j+1]){
            d=a[j];
           a[j]=a[j+1];
           a[j+1]=d;
        }
    }
    q=1;
    for(int r=0;r<n;r++){
        if(a[r]==q){
            q++;
        }
    }
    printf("%d",q);
}