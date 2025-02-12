#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[1000],st[1000];
    fgets(str,1000,stdin);
    st= tolower(str);
    puts(st);
    return 0;

}