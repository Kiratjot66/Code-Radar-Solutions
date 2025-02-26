#include <stdio.h>
int main(){
    int n,m=0,v=0;
    scanf("%d",&n);
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int j=0;j<n;j++){
       b[j]=a[j];
    }
    for(int k=n-1;k>=0;k--){
       c[(n-1-k)]=a[k];
    }
    for(int l=0;l<n;l++){
        if(b[l]!=c[l]){
            printf("N0");
            break;
        }
        else{
            v++;
        }
    }
    if(v>0){
        printf("YES");
    }
}