#include<stdio.h>
int main(){
  int n;
  printf("Enter the limit:");
  scanf("%d",&n);
  int array[n];
  int  *aptr=array;
  printf("\nEnter elements:");
  for(int i=0;i<n;i++){
    scanf("%d",(array+i));
  }
  printf("\nThe elements are:");
  for(int i=0;i<n;i++){
    printf("%d\t",*(array+i));
  }
  return 0;
}
  
