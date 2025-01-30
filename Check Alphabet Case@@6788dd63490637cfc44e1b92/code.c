#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    int d=a
    if(65<=d<=90 ){
        printf("Uppercase");
    }
    else if(97<=d<=122){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}