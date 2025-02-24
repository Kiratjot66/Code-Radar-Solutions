#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[2000];
    fgets(str,1000,stdin);
    int l=strlen(str);
    int k=0;
    for(int i=97;i<=122;i++){
        for(int j=0;j<l;j++){
            char ch=i+'0';
            toupper(str[j]);
            if(ch==str[j]){
               k++;
            }
        }
    }
    if(l==k){
        printf("Yes");
    }
    else{
        printf("No");
    }
}