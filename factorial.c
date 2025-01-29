#include <stdio.h>
int main(){
    int num,fact=1;
    printf("\n Enter number:");
    scanf("%d",&num);
    if(num>0){
      while (num>0){
          fact=fact*num;
          num-=1;
      }
      printf("%d",fact);
      }else{
          printf("enter a positive number");
      }
    return 0;
    }
