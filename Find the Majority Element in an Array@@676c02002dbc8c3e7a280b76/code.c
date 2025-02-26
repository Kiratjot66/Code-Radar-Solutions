#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int j=0;j<n;j++){
        int l=0,c;
        for(int k=0;k<n;k++){
            if(a[j]==a[k]){
                l++;
            }
        }
        if(l>n/2){
           c=a[i]; 
        }
    }
    printf("%d",c);
}