#include <stdio.h>
#include <string.h>
int main() {
    char str[1000],st[1000];
    scanf("%s",&str);
    scanf("%s",&st);
    int k=strlen(st);
    strncat(str,st,k);
    puts(str);
    return 0;
}