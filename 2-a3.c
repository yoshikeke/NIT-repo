#include <stdio.h>
int main(void){
  int x;
  scanf("%d",&x);
  if(x<100)
    printf("%d",-1);
  if(x>=100&&x<1000){
      int a=x%10;
      int b=x%100-a;
      int c=x-a-b;
      if(a==b/10&&a==c/100){
          printf("%d",3);
      }else if(a != b/10 && a != c/100 && b/10 != c/100){
          printf("%d",1);
      }else{
          printf("%d",2);
      }
      printf("\n%d %d %d",a,b/10,c/100);
  }
}