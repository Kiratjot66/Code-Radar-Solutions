#include <stdio.h>
int main() {
    char str[1000],char st=" ";
    gets(str);
    l=len(str);
    for(int i=l-1;i>=0;i--){
       st=st+str[i];
    }
    printStr(str);
    return 0;
}