#include <stdio.h>
int main(){
    int a;
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
                printf("Not Prime");
                break;
            }
            else{
                printf("Not Prime");
            }
        }
    }
}