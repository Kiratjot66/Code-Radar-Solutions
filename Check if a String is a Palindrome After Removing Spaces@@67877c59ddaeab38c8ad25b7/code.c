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
    int j=0;
    if(ispace(a) ||!isalpha(a)){
        printf("No");
        return 0;
    }
    for(int i=l-1;i>=0;i--){
       b[j]=a[i];
       j++;
    }
    b[j] = '\0';
    if(strcmp(a,b)){
        printf("Yes");
    }
    else{
        printf("No");
    }
}