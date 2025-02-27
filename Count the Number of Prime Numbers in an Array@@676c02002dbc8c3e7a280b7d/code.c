#include <stdio.h>
int main(){
    int n,p,d,ad,bd=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        p=a[i];
        if(p<2){
            d++;
        }
        else if(p>2){
        for (int j = 2; j < p; j++) {
            ad=0; 
            if (p% j == 0) {
                ad++;
                }
        }
        }
        if(ad==0){
            bd++;
        }
    }
    printf("%d",bd);
}