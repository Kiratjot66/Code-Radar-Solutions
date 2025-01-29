#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int c;
    if(a>b){
        c=a;
        printf(c);
    }
    else{
        c=b;
        printf(c);
    }
    return 0;
}