#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a=0,b=0;
    for(int i=0;i<n;i++){
        if(!(a[i]>=a[i+1])){
            a++;
        }
    }
    for(int i=0;i<n;i++){
        if(!(a[i]<=a[i+1])){
            b++;
        }
    }
    if((a>0)||b>0){
       ptintf("YES");
    }
    else{
        printf("NO");
    }
}