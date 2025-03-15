/* Name:Ganga
Program to convert decimal to binary
*/
#include <stdio.h>
int main(){
  int num;
  int rem,i=1,bin=0;
  printf("\n Enter number:");
  scanf("%d",&num);
  while (num>0){
    rem=num%2;
    bin=rem*i +bin;
    i=i*10;
    num=num/2;
  }
  printf("%d",bin);
  return 0;
}
    
  
