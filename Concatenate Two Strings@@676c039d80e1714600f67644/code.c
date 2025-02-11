#include <stdio.h>
#include <string.h>
int main() {
    char str[1000],st[1000];
    fgets(str,1000,stdin);
    str[strcspn(str,"\n")]=0;
    fgets(st,1000,stdin);
    st[strcspn(st,"\n")]=0;
    strncat(str,st,strlen(st));
    puts(str);
    return 0;
}