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
        for(int j=0;j<n;j++){
            if(b==a[j]){
                printf("%d",b);
                break;
            }
        }
    }
}