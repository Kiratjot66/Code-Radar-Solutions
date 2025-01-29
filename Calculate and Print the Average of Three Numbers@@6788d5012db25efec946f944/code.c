#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d %d",&a,&b);
    int d=(a+b+c)/3;
    printf("Average: %d", d);
    return 0;
}