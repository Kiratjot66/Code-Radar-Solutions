#include <stdio.h>
int main(){
    int n,f,r=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int d=a[i];
        while(d>0){
            f=d%10;
            r=r+f;
            d=d/10;
        }
        printf("%d ",r);
    }
    
}