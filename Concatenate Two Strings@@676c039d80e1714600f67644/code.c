#include <stdio.h>
#include <string.h>
int main() {
    char str[1000],st[1000];
    scanf("%s",&str);
    scanf("%d",&st);
    strncat(str,st,3);
    puts(str);
    return 0;
}