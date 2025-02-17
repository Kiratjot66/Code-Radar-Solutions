#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num)
    int lsb = num & 1; 
    int msb = (num >> 3) & 1;  

    printf("LSB: %d\n", lsb);
    printf("MSB: %d\n", msb);
}