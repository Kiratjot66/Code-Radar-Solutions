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

        if(a[i]==a[i+1]){
            printf("%d",a[i]);
            return 0;
       }
    }
}