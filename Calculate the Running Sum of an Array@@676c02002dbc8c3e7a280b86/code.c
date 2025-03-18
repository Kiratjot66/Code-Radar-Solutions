#include <stdio.h>
int main(){
    int n,c=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<n;i++){
       for(int j=0;j<=i;j++){
        c=c+a[j];
       }
       b[i]=c;
       c=0;
    }

    b[0]=a[0];
    for(int i=0;i<n;i++){
        printf("%d ",b[i]);
    }
}