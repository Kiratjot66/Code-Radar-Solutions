#include <stdio.h>
int main() {
    int a; char c;
    scanf("%d",&a);
    if(a>=90){
        c='A'; }
    else if(a>=80 && a<90){
        c='B';}
    else if(a>=70 && a<80){
        c='C';
    }
    else if(a>=60 && a<70){
        c='D';}
    else {c='F'}
    printf("%c",c);
    
    return 0;
}