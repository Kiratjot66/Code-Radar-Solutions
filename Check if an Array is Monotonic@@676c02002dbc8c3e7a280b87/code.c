#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int an=0,b=0;
    for(int i=0;i<n;i++){
        if(!(a[i]>=a[i+1])){
            an++;
        }
    }
    for(int i=0;i<n;i++){
        if(!(a[i]<=a[i+1])){
            b++;
        }
    }
    if((an>0)||b>0){
       ptintf("YES");
    }
    else{
        printf("NO");
    }
}