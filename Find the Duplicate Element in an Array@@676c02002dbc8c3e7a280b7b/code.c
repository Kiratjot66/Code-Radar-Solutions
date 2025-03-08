#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int c=0,d;
    for(int i=0;i<n;i++){
       for(int j=1;j<n;j++){
        if(a[i]==a[j]){
            printf("%d",a[i]);
            return 0;
        }
       }
    }
}