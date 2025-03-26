#include <stdio.h>
int power(int base,int expo){
  if (expo<1){
    return 1;
  }else{
    return base*power(base,expo-1);
  }
}
int main(){
  int base,expo,p;
  printf("\n Enter two numbers:");
  scanf("%d%d",&base,&expo);
  p=power(base,expo);
  printf("%d",p);
  return 0;
}
