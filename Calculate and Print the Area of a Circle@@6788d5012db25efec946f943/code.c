#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a,b;
    scanf("%f",&a);
    b=3.14*a*a;
    printf("Area: %.2f", b);
    return 0;
}