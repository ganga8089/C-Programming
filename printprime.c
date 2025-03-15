#include <stdio.h>
void printPrime(int);
int main(){
  int limit;
  printf("\n Enter number:");
  scanf("%d",&limit);
  printPrime(limit);
  return 0;
}
void printPrime(int limit){
  
  for (int i=2;i<limit;i++){
  int flag=0;
      for(int j=2;j<i;j++){
       if (i%j==0){
          flag=1;
          break;
        }
      }
      if (flag==0){
        printf("%d\t",i);
      }
  }
}
