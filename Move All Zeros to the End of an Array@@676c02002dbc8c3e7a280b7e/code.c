#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int s=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            a[s++]=a[i];
        }
    }
    for(int i=s;i<n;i++){
        a[i]=0;
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}