#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[1000];
    fgets(a,sizeof(a),stdin);
    int l=strlen(a);
    int m=0;
    for(int i=0;i<l;i++){
        for(int j=i+1;j<l;j++){
          if(a[i]==a[j]){
             m++;
          } 
        } 
        if(m==0){
            printf("%c",a[i]);
            return 0;
        }
    }
        
}