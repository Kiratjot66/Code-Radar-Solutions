#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int lsb = num & 1; 
    if(lsb==1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}