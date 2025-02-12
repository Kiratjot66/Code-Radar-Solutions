#include <stdio.h>
#include <string.h>
void sort(char *str){
    int len=strlen(str);
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}
int main(){
    char str1[1000];
    fgets(str1,1000,stdin);
    str[strcspn(str1, "\n")] = '\0';
    char str2[1000];
    fgets(str2,1000,stdin);
    str[strcspn(str2, "\n")] = '\0';
    int d=strlen(str1);
    int e=strlen(str2);
    sort(str1);
    sort(str2);
    int a =strcmp(str1,str2);
    if(a==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    
    
}