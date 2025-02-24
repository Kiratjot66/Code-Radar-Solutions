#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[1000],st[1000]="";
    fgets(str, sizeof(str), stdin); 
    str[strcspn(str, "\n")] = '\0';
    int l = strlen(str);
    int k=0,f=0,m=0;
    if(isspace(str)){
        printf("0");
        return 0;
    }
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
    for(int p=l-1;p>=0;p--){
        if(isspace(str[p])){
            m++;
        }
        else{
            break;
        }
        
    }
    printf("%d",f+1-m);
    
}