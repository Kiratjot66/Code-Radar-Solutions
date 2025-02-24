#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[1000],st[1000]="";
    fgets(str,1000,stdin);
    int l=strlen(str);
    for(int i=0;i<l;i++){
        char ch=toupper(str[i]);
        char temp[2] = {ch, '\0'};
        strcat(st,temp);
    }
    puts(st);
    return 0;

}