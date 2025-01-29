#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int c=0;
    if(a>b){
        c=a;
    }
    else{
        c=b;
    }
    printf(c);
    return 0;
}