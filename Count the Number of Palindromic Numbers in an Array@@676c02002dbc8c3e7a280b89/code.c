#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int f,h,p=0;
    for(int i=0;i<n;i++){
        int b=a[i];
        h=b;
        int k=0;
        while(b>0){
            f=b%10;
            k=k*10+f;
            b=b/10;
        }
        if(k==h){
            p++;
        }
    }
    printf("%d",p);
}