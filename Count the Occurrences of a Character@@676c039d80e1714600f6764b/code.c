#include <stdio.h>
#include <string.h>
int main(){
    char str[1000];
    char s;
    int a=0;
    fgets(str,1000,stdin);
    str[strcspn(str, "\n")] = '\0';
    scanf(" %c",&s);
    int l=strlen(str);
    for(int i=0;i<l;i++){
        if(str[i]==s){
            a++;
        }
        
    printf("%d",a);
    return 0;

}