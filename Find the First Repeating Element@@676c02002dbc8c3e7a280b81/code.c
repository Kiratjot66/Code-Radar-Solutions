#include <stdio.h>
int main(){
    int n,h=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int b=a[i];
        for(int j=i+1;j<n;j++){
            if(b==a[j]){
                printf("%d",a[j]);
                h++;
                return 0;
            }
        }
    }
    if(h==0){
        printf("-1");
    }
}