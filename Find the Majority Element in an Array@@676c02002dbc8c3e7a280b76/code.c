#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int c,s=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int j=0;j<n;j++){
        int l=0;
        for(int k=0;k<n;k++){
            if(a[j]==a[k]){
                l++;
            }
        }
        if(l>n/2){
           c=a[j]; 
        }
        else{
            s++;
        }
    }
    if(s==n){
        printf("-1");
    }
    else{
        printf("%d",c); 
    }
}