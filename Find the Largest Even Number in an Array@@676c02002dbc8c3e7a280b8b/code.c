#include <stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int a[n],b[n];
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  int f=0;
  for(int i=0;i<n;i++){
    if(a[i]%2==0){
       b[f]=a[i];
       f++;
    }
  }
  int h=sizeof(b);
  int t=b[0];
  for(int i=0;i<h;i++){
      if(b[i]>t){
        t=b[i];
      }
  }
  printf("%d",t);

}