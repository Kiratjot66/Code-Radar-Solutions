#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int t,a,g=0;
    scanf("%d",&t);
    for(int j=0;j<n;j++){
        if(arr[j]==t){
            a=j;
            g++;
            break;
        }

    }
    if(g==0){
        printf("-1");
    }
    else{
        printf("%d",a);
    }
}