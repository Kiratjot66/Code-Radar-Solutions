#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k,m=0;
    scanf("%d",&k);
    for(int l=0;l<n;l++){
        if(a[l]==a[l+1]){
          m++;
        }
    }
    if(m==n && a[0]+a[1]==k){
        printf("%d %d",a[0],a[1]);
        return 0;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==k){
                printf("%d %d",a[i],a[j]);
                printf("\n");
            }
        }
    }
}