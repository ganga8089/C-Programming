/*Author: Ganga
   Date:07/02/2025
   Program to find the transpose of a matrix*/
#include<stdio.h>
int main(){
  int row,col,i,j;
  printf("\n Enter row and column:");
  scanf("%d%d",&row,&col);
  int matrix[row][col];
  printf("\n Enter elements:");
  for (i=0;i<row;i++){
    for (j=0;j<col;j++){
      scanf("%d",&matrix[i][j]);
    }
  }
  printf("\n The matrix is:\n");
  for (i=0;i<row;i++){
    for (j=0;j<col;j++){
      printf("%d\t",matrix[i][j]);
    }
    printf("\n");
  }
  printf("\n The transposed matrix is:\n");
  for (i=0;i<col;i++){
    for (j=0;j<row;j++){
      printf("%d\t",matrix[j][i]);
    }
    printf("\n");
  }
  return 0;
}
