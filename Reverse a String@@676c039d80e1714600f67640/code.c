#include <stdio.h>
#include <string.h>
int main() {
    char str[1000],char st="";
    fgets(str);
    l=len(str);
    for(int i=l-1;i>=0;i--){
       strncat(st,str[i],1);
    }
    puts(str);
    return 0;
}