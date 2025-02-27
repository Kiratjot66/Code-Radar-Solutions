#include <stdio.h>
int main(){
    int n,f,r;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int d=a[i];
        r=0;
        while(d>0){
            f=d%10;
            r=r+f;
            d=d/10;
        }
        printf("%d ",r);
    }
    
}