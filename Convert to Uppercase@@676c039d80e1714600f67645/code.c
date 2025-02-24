#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[1000],st[1000]="";
    fgets(str,1000,stdin);
    int l=strlen(str);
    for(int i=0;i<l;i++){
        char ch=toupper(str[i]);
        st=st+ch;
    }
    puts(st);
    return 0;

}