#include <stdio.h>
int main(){
    int n,h,q;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k=a[0];
    for(int j=0;j<n;j++){
        if(a[j]>a[j+1]){
            d=a[j];
           a[j]=a[j+1];
           a[j+1]=d;
        }
    }
    for(int r=0;r<n;r++){
        if(a[r]>0){
            h=r;
            break;
        }
    }
    for(int t=h;t<n;t++){
        if((a[t]+1)!=a[t+1]){
            q=a[t]+1;
        }
    }
    printf("%d",q);
}