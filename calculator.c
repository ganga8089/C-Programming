#include <stdio.h>
int main(){
    int num1,num2,result;
    char operator;
    printf("\n Enter two numbers:");
    scanf("%d%d",&num1,&num2);
    printf("\n Enter operator");
    scanf(" %c",&operator);
    switch(operator){
          case '+' :
              result=num1+num2;
              printf("\n Sum=%d",result);
              break;
          case  '-' :
              result=num1-num2;
              printf("\n Difference=%d",result);
              break;
          case '*' :
              result=num1*num2;
              printf("\n Product=%d",result);
              break;
          case '/' :
              result=num1/num2;
              printf("\n Quotient=%d",result);
              break;
          case '%' :
              result=num1%num2;
              printf("\n Remainder=%d",result);
              break;
          default:
              printf("\n invalid operator");
              break;
    }
    return 0;
}
