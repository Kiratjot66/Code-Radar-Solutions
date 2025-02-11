#include <stdio.h>
int main() {
    char str[1000];
    fgets(str,1000,stdin);
    int a=0;
    int l=strlen(str);
    for(int i=0;i<=l-1;i++){
        if(str[i]=='a' ||str[i]=='e'||str[i]=='i'||str[i]=='o' ||str[i]=='u'){
            a++;
        }
    }
    printf("%d",a);
    return 0;
}