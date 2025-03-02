#include <stdio.h>
int main(){
    int n,d=0,c,f=0,h;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int a=arr[i];
        for(int j=i+1;j<n;j++){
            if(a==arr[j]){
                d++;
                c=a;
            }
            if(d>f){
                f=d;
                d=0;
                h=c;
            }
            else if(d==f){
                h=d>f? f : d;
            }
        }
    }
    printf("%d",h);
}