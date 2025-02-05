#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' ||ch=='i' ||ch=='o'||ch=='u'){
        printf("Vowel");
        break;
    }
    int a= (int)ch;
    else if((ch<=65 && ch >=90 )||(ch<=97 &&ch>=122)){
        printf("Consonant");
    }
    else if(isdigit(a)){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}