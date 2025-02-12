#include <stdio.h>
#include <string.h>
int main(){
    char str[1000],st[1000]="";
    char s,k;
    fgets(str,1000,stdin);
    str[strcspn(str, "\n")] = '\0';
    scanf(" %c",&s);
    scanf(" %c",&k);
    int l=strlen(str);
    for(int i=0;i<l;i++){
        if(str[i]==s){
            strncat(st,&k,1);
        }
        else{
            strncat(st,&str[i],1);
        }
    }
    puts(st);
    return 0;

}