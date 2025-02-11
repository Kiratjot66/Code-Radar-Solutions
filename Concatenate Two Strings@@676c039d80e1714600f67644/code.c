#include <stdio.h>
#include <string.h>
int main() {
    char str[1000],st[1000];
    fgets(str,1000,stdin);
    fgets(st,1000,stdin)
    strncat(&str,&st,1);
    puts(str);
    return 0;
}