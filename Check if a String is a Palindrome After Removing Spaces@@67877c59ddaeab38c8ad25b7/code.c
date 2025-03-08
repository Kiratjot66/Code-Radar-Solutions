#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[1000],b[1000]="";
    fgets(a,sizeof(a),stdin);
    a[strcspn(a, "\n")] = '\0';
    int l=strlen(a);
    int j=0;
    for(int i=l-1;i>=0;i--){
       b[j]=a[i];
       j++;
    }
    b[j] = '\0';
    if(strcmp(a,b==0)){
        printf("Yes");
    }
    else{
        printf("No");
    }
}