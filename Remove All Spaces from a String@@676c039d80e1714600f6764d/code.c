#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[1000],st[1000]="",ch;
    fgets(str,1000,stdin);
    int l=strlen(str);
    for(int i=0;i<l;i++){
        if(isspace(str[i])){
            continue;
        }
        else{
            ch=str[i];
            char temp[2] = {ch, '\0'};
            strcat(st,temp);
        }
    }
    puts(st);
}