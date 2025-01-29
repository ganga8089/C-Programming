#include <stdio.h>
int main(){
    int num1,num2,num3;
    printf("\n Enter three numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);
    if (num1>num2){
        if (num1>num3){
            printf("%d is larger",num1);
        }
    }
    else if(num2>num3){
        
            printf("%d is larger",num2);
          
    }
    else{
        printf("%d is larger",num3);
    }
    return 0;
}
    
