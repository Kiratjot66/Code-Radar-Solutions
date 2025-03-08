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

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
              if(a[i]+a[j]==k){
                if(m!=0){
                  printf("%d %d",a[i],a[j]);
                  printf("\n");
                  m=1;
                }
              }
        }
    }
}