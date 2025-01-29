#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a,b,c;
    scanf("%f %f",&a,&b);
    float d=(a+b+c)/3;
    printf("Average: %.2f", d);
    return 0;
}