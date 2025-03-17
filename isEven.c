#include <stdio.h>
int isEven(int);
int main(){
  int n,result;
  printf("\n Enter number:");
  scanf("%d",&n);
  result=isEven(n);
  if (result==1){
    printf("The given number is Even");
  }
  else{
    printf("The given number is Odd");
  }
  return 0;
}
int isEven(int n){
  if (n%2==0){
    return 1;
  }
  else{
    return 0;
  }
}
