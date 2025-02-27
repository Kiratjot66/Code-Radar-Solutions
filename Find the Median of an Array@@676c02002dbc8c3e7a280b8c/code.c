#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    if(n%2==0){
        int b=n/2;
        printf("%d",(a[b-1]+a[b])/2);
    }
    else{
        int b=n/2;
        printf("%d",a[b+1]);
    }
}