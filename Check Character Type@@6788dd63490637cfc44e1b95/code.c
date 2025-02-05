#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' ||ch=='i' ||ch=='o'||ch=='u'){
        printf("Vowel");
        break;
    }
    else if((ch>='a' && ch <='z' )||(ch>='A' &&ch<'Z')){
        printf("Consonant");
    }
    else if(isdigit(ch)){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}