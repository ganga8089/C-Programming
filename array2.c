#include <stdio.h>
int main(){
    int row,col,i,j;
    printf("\n Enter the row and column:");
    scanf("%d%d",&row,&col);
    if (row!=col){
        printf("\n Invalid input");
    }
    else{
        int matrix[row][col];
        printf("\n Enter elements:");
        for (i=0;i<row;i++){
            for (j=0;j<col;j++){
                scanf("%d",&matrix[i][j]);
            }
        }
        for (i=0;i<row;i++){
            for (j=0;j<col;j++){
                if (i==j){
                    matrix[i][j]=0;
                }
            }
       }
       printf("\n The matrix is:");
       for (i=0;i<row;i++){
           for (j=0;j<col;j++){
               printf("%d\t",matrix[i][j]);
            }
            printf("\n");
       }
       }
       return 0;
}
