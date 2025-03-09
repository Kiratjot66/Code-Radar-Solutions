#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[1000];
    fgets(a,sizeof(a),stdin);
    int l=strlen(a);
    for(int i=0;i<l;i++){
        int d=0;
        for(int j=i+1;j<l;j++){
          int m=0;
          if(a[i]==a[j]){
             m++;
             d++;
          } 
        } 
        if(m==0){
            printf("%c",a[i]);
            return 0;
        }
    }
    if(d!=0){
        printf("-");
    }
        
}