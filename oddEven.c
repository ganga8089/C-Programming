/* Name:Ganga
Program to check whether the given number is odd or even using function
*/
#include <stdio.h>
void oddEven(int n);
int main(){
  int n;
  printf("\n Enter number:");
  scanf("%d",&n);
  oddEven(n);
  return 0;
}
void oddEven(int n){
  if (n%2==0){
    printf("\n Even");
  }
  else{
    printf("\n Odd");
  }
}
  
