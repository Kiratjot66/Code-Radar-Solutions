#include <stdio.h>

int main() {
    int i,j,r;
    char a;
    scanf("%d %d %c",&i,&j,&a);
    switch(a){
        case '+':
         r=i+j;
         printf("%d",&r);
         break;
        case '-':
         r=i-j;
         printf("%d",&r);
         break;
        case '*':
         r=i*j;
         printf("%d",&r);
         break;
        case '/':
         r=i/j;
         printf("%d",&r);
         break;
        default:
         printf("error");
         break;
    }
    return 0;
}