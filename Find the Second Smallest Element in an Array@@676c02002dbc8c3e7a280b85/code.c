#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int l=a[0];
    int s=-1;
    for(int i=1;i<n;i++){
        if(l>a[i]){
            s=l;
            l=a[i];
        }
        else if(a[i]<s &&(a[i]<s || s==-1)){
            s=a[i];
        }
    }
    printf("%d",s);
}