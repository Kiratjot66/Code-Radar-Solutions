#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int s=a[0];
    for(int i=1;i<n;i++){
        if(s>a[i]){
            s=a[i];
        }
    }
}