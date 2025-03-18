#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int an,b;
    for(int i=0;i<n-1;i++){
        if(!(a[i]>=a[i+1])){
           an=0;
        }
        else{
            an=1;
            printf("NO");
            return 0;
        }
    }
    for(int i=0;i<n-1;i++){
        if((a[i]<=a[i+1])){
            b=0;
        }
        else{
            b=1;
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}