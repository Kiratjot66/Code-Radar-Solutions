#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[1000],st[1000]="";
    fgets(str, sizeof(str), stdin); 
    str[strcspn(str, "\n")] = '\0';
    int l = strlen(str);
    int k=0,f=0;
    for(int i=0;i<l;i++){
        if(isspace(str[i])){
            continue;
        }
        else{
            k=i;
            break;
        }
    }
    for(int j=k;j<l;j++){
        if(isspace(str[j])){
            f++;
        }
    }
    printf("%d",f+1);
    
}