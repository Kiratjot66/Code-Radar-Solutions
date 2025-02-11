#include <stdio.h>
#include <string.h>
int main() {
    char str[1000],st[1000]="";
    fgets(str,1000,stdin);
    int l=strlen(str);
    for(int i=l-1;i>=0;i--){
       strncat(st,&str[i],1);
    }
    puts(st);
    return 0;
}