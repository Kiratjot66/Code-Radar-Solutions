#include <stdio.h>
int main() {
    int N,i,j;
    printf("Enter the number of rows: ");
    scanf("%d",&N);
    for(i=N;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}