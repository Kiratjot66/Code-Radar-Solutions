#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int b=a[i];
        int d=0;
        for(int j=i+1;j<n;j++){
            d=d+a[i];
        }
        if(b>=d){
            printf("%d",b);
            return 0;
        }
    }
}