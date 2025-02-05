#include <stdio.h>
int main(){
    int i,limit,number;
    printf("\n Enter the number of elements in array:");
    scanf("%d",&limit);
    int array[limit];
    printf("\n Enter elements:");
    for (i=0;i<limit;i++){
        scanf("%d",&array[i]);
    }
    printf("\n Enter the number to be searched:");
    scanf("%d",&number);
    for (i=0;i<limit;i++) {
        if (array[i]==number){
            printf("The element %d is found at position %d\n",number,i+1);
        }
   }
   return 0;
}
    
