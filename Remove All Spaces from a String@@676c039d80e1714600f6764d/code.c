#include <stdio.h>
#include <string.h>
int main(){
    char str[1000],st[1000]="";
    int l=strlen(str);
    for(int i=0;i<l;i++){
        if(isspace(str[i])){
            continue;
        }
        else{
            char temp[2] = {ch, '\0'};
            strcat(st,temp);
        }
    }
    puts(st);
}