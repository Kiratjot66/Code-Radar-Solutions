#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++){
        if(!(a[i]>=a[i+1])){
           an=0;
        }
    }
    for(int i=0;i<n-1;i++){
        if((a[i]<=a[i+1])){
            b=0;
        }
    }
    if((b==0)||(an==0)){
       printf("YES");
    }
    else{
        printf("NO");
    }
}