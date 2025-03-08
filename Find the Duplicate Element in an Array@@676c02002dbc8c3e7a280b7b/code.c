#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0,i<n;i++){
        scanf("%d",&a[i])
    }
    c=0;
    for(int i=1;i<n;i++){
       d=a[c];
       if(a[i]==d){
        printf("d");
        return 0;
       }
       else{
        c++;
       }
    }
}