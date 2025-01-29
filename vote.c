#include<stdio.h>
int main() {
    int (age);
    printf("Enter your age:");
    scanf("%d",&age);
    if (age<18){
        printf("\nNot eligible");
    }
    else{
        printf("\nCongratulation! You are eligible for casting your vote");
    }
    return 0;
    
}