#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    if('A'<=a<='Z' );{
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
  
    return 0;
}