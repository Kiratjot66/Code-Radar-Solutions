#include <stdio.h>
int main() {
    int s,c;
    scanf("%d %d",&s,&c);
    if((s-c)>0){
        printf("Profit");
    }
    else if((s-c)<0){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}