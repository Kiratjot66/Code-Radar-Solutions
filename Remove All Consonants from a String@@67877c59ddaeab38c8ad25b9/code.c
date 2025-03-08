#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[1000];
    fgets(a,sizeof(a),stdin);
    int b=strlen(a);
    for(int i=0;i<b;i++){
        char d= tolower(a[i]);
        if(d=='a'||d=='e'||d=='i'||d=='o'||d=='u'){
            printf("%c",a[i]);
        }
    }
}