#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char st1[100] ,st2[100];
    scanf("%s %s",&st1,&st2);
    printf("You entered: %s and %s",st1,st2 );
    return 0;
}