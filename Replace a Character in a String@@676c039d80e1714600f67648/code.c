#include <stdio.h>
#include <string.h>
int main(){
    char str[1000],s[1],k[1],st[1000]="";
    fgets(str,1000,stdin);
    fgets(s,1,stdin);
    fgets(k,1,stdin);
    int l=strlen(str);
    for(int i=0;i<l;i++){
        if(str[i]==s){
            strncat(st,k,1);
        }
        else{
            strncat(st,&str[i],1);
        }
    }
    puts(st);
    return 0;

}