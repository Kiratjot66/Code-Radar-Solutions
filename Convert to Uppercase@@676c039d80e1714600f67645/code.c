#include <stdio.h>
#include <string.h>
#include <ctype.h>
char  upper( *str){
    int l=strlen(str);
    for(int i=0;i<l;i++){
        *str= toupper( *str[i]);
    }
}
int main(){
    char str[1000],st[1000]="";
    fgets(str,1000,stdin);
    upper(str)
    puts(str);
    return 0;

}