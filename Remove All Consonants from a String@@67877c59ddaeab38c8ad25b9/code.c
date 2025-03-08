#include <stdio.h>
int main(){
    char a[1000];
    fgets(a,sizeof(a),stdin);
    int b=sizeof(a);
    for(int i=0;i<b;i++){
        if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U'){
            printf("%c",a[i]);
        }
        else(a[i]==" ")[
            printf(" ");
        ]
    }
}