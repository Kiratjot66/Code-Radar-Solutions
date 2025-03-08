#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[1000];
    fgets(a,sizeof(a),stdin);
    int l=strlen(a);
    int m=0;
    for(int i=1;i<l;i++){
        int d=0;
        char c=a[d];
        d++;
        if(c==a[i]){
            printf("%c",c);
            m++;
            return 0;
        }
    }
    if(m==0){
        printf("-");
    }
}