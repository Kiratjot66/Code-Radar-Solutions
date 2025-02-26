#include <stdin.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++){
        if(arr[j]>arr[j+1]){
            arr[j]=arr[j+1];
        }
    }
    int l=0
    for(int k=0;k<n;k++){
        a=arr[l];
        for(int g=1;g<N;g++){
            int d=0;
           if(a+1=arr[g]){
            d++;
           }
           else{
            l=g;
            break;
           }
           if(b<d){
            b=d;
           }
           else{
            c=d;
           }
        }
        
    }
    printf("%d",c);
}