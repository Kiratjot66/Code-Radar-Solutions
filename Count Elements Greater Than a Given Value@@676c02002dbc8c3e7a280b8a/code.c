#include <stdio.h>
int main(){
    int n,l=0,k;
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++){
       scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(k<a[i]){
            l++;
        }
    }
    printf("%d",l);
}