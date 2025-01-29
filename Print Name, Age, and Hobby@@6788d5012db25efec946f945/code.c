#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char st[100];
    int a;
    char st2[100];
    scanf("%s %d %s",&st,&a,&st2);
    printf("Name: %s\n", st);
    printf("Age: %d\n", a);
    print("Hobby: %s", st2)
    return 0;
}