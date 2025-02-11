#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    fgets(str,1000,stdin);
    int a=0;
    int l=strlen(str);
    for(int i=0;i<=l-1;i++){
        if(str[i]=='a' ||str[i]=='e'||str[i]=='i'||str[i]=='o' ||str[i]=='u' ||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str=='U'){
            a++;
        }
    }
    printf("%d",a);
    return 0;
}