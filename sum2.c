#include <stdio.h>
int main(){
    int row,col,i,j,sum;
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
                    sum=sum+matrix[i][j];
                }
            }
       }
       printf("\n The matrix is:\n");
       for (i=0;i<row;i++){
           for (j=0;j<col;j++){
               printf("%d\t",matrix[i][j]);
            }
            printf("\n");
       }
       }
       printf("\n Sum:%d",sum);
       return 0;
}
