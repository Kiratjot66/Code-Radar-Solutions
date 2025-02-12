#include <stdio.h>
#include <string.h>
int main(){
    char str[1000];
    fgets(str,1000,stdin);
    str[strcspn(str, "\n")] = '\0';
    int a=0,b=0;
    int l=strlen(str);
    for(int i=0;i<l;i++){
        if(str[i]=='0' || str[i]=='1'){
            a++;
        }
        else{
            b++;
        }

    }
    if(b>0){
        printf("No");
    }
    {
        printf("Yes");
    }
    return 0;
}