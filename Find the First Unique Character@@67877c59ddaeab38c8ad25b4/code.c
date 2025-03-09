#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[1000];
    fgets(a,sizeof(a),stdin);
    int l=strlen(a);
    int d;
    for(int i=0;i<l;i++){
        d=0;
        for(int j=0;j<l;j++){
          if(a[i]==a[j]){
             d++;
          } 
        } 
        if(m==1){
            printf("%c",a[i]);
            return 0;
        }
    }
    printf("-");
    return 0;
    }
        
}