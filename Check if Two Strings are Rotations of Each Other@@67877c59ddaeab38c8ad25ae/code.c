#include <stdio.h>
int main(){
    char str1[1000],str2[1000],str[1000];
    fgets(str1,sideof(str1),stdin);
    fgets(str2,sideof(str2),stdin);
    int a= sizeof(str1);
    for(int i=a-1;i>=0;i--){
        strcat(str,str1[a]);
    }
    if(strcmp(str,str2)){
        printf("Yes");
    }
    else{
        printf("No");
    }

}