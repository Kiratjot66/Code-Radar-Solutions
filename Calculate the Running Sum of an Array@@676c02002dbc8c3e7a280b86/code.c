#include <stdio.h>
int main(){
    int n,c=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<n;i++){
       for(int j=0;j<=i;j++){
        c=c+a[j];
       }
       a[i]=c;
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}