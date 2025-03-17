#include <stdio.h>
int multiply(int,int);
int main(){
  int num1,num2,prod;
  printf("\n Enter two numbers:");
  scanf("%d%d",&num1,&num2);
  prod=multiply(num1,num2);
  printf("Product:%d",prod);
  return 0;
}
int multiply(int num1,int num2){
  int prod;
  prod=num1*num2;
  return prod;
}
  
