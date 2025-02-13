#include <stdio.h>
int main(){
    int a,d=0,r=0;
    scanf("%d",&a);
    if(a==2){
        printf("Prime");
    }
    else if(a==1){
        printf("Not Prime");
    }
    else{
        for(int i=2;i<a;i++){
            if(a%i==0){
                r++;
            }
            else{
               d++;
            }
        }
        if(d>0 && r==0){
            printf("Prime");
        }
        if(r>0){
            printf("Not Prime");
        }
    }
}