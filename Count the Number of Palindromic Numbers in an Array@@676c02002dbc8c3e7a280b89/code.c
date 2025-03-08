#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int f,k=1,h,p=0;
    for(int i=0;i<n;i++){
        int b=a[i];
        b=h;
        while(b>0){
            f=b%10;
            k=f*10+k;
            b=b/10;
        }
        if(k==h){
            p++;
        }
    }
    printf("%d",p);
}