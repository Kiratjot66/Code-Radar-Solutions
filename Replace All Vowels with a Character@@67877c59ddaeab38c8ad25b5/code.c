#include <stdio.h>
#include <string.h>
int main(){
    char str[1000],st[1000]="";
    fgets(str,1000,stdin);
    str[strcspn(str, "\n")] = '\0';
    char s;
    scanf(" %c",&s);
    int l=strlen(str);
    for(int i=0;i<l;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            strncat(st,&s,1);
        }
        else{
            strncat(st,&str[i],1);
        }
    }
    puts(st);

    return 0;
}