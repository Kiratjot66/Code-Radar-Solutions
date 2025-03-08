#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[1000],b[1000]="";
    fgets(a,sizeof(a),stdin);
    fgets(b,sizeof(b),stdin);
    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';
    int l=strlen(a);
    for(int i=l-1;i>0;i--){
       b[l]=a[i];
    }
    if(strcmp(a,b)==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
}