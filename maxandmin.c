#include <stdio.h>
int main(){
    int i,limit,positionMax=1,positionMin=1;
    printf("\n Enter the number of elements in a array");
    scanf("%d",&limit);
    
    int array[limit];
    printf("\n Enter elements:");
    for (i=0;i<limit;i++){
        scanf("%d",&array[i]);
    }
    int max=array[0],min=array[0];
    for(i=0;i<limit;i++){
        if (array[i]>max){
            max=array[i];
            positionMax=i+1;
        }
        if (array[i]<min){
            min=array[i];
            positionMin=i+1;
        }
    }
    printf("\n Maximum of the array is %d and is found at %d",max,positionMax);
    printf("\n Minimum of the array is %d and is found at %d",min,positionMin);
    return 0;
}
    
    
