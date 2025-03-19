#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=n;i>0;i--){
        scanf("%d",&a[i]);
    }
    int l=a[0];
    int s=-1;
    for(int i=n;i>1;i--){
        if(l>a[i]){
            s=-l;
            l=a[i];
        }
        else if(a[i]>l &&(a[i]<s)){
            s=a[i];
        }
    }
    printf("%d",s);
}