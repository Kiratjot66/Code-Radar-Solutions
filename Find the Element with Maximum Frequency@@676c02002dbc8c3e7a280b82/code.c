#include <stdio.h>
int main(){
    int n,d=0,c,f=0,h,s=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int a=arr[i];
        d=0;
        for(int j=i+1;j<n;j++){
            if(a==arr[j]){
                d++;
                c=a;
            }
            if(d>f){
                f=d;
                h=c;
                s=1;
            }
            else if(d==f){
                h= d>f ? h : c;
                s++;
            }
        }
    }
    if(s>2 && d>2){
        printf("1");
    }
    else{
        printf("%d",h);
    }
}