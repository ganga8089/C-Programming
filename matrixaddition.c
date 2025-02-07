/*Author: Ganga
   Date:07/02/2025
   Program to add two matrix*/
#include <stdio.h>
int main(){
    int row,col,i,j;
    printf("\n Enter the row and column:");
    scanf("%d%d",&row,&col);
    if (row!=col){
        printf("\n Invalid input");
    }
    else{
        int m1[row][col],m2[row][col];
        printf("\n Enter elements of first matrix:\n");
        for (i=0;i<row;i++){
          for (j=0;j<col;j++){
            scanf("%d",&m1[i][j]);
            }
        }
        printf("\n Enter elements of second matrix:\n");
        for (i=0;i<row;i++){
          for (j=0;j<col;j++){
            scanf("%d",&m2[i][j]);
          }
        }
        int m3[i][j];
        for (i=0;i<row;i++){
          for (j=0;j<col;j++){
            m3[i][j]=m1[i][j]+m2[i][j];
          }
        }
        printf("Sum=\n");
        for (i=0;i<row;i++){
          for (j=0;j<col;j++){
            printf("%d\t",m3[i][j]);
          }
          printf("\n");
        }
        }
        return 0;
}
        
           
