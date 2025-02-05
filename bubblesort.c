#include <stdio.h>
int main() {
    int i,limit;
    printf("\n Enter the number of elements in array:");
    scanf("%d",&limit);
    int array[limit];
    printf("\n Enter elements:");
    for (i=0;i<limit;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<limit-1;i++){
        for(int j=0;j<limit-i;j++){
            if (array[j]>array[j+1]){
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    printf("\n The sorted array:\t");
    for(int i=0;i<limit;i++){
        printf("%d\t",array[i]);
    }
    return 0;
}
    
