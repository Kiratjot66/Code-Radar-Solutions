#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    fgets(str,1000,stdin);
    int l=strlen(str);
    printf("%d",l);
    return 0;
}