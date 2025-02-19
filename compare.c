#include <stdio.h>
#include <string.h>
int main(){
  char str1[50],str2[50];
  printf("\n Enter first string:");
  fgets(str1,sizeof(str1),stdin);
  printf("\n Enter second string:");
  fgets(str2,sizeof(str2),stdin);
  int cmp;
  cmp=strcmp(str1,str2);
  if (strlen(str1)!=strlen(str2)){
    printf("Invalid input");
    return 0;
  }
  
  if (cmp==0){
    printf("\n Both are equal");
  }
  else if (cmp<0){
    printf("\n Second one is greater");
  }
  else{ 
    printf("\n First one is greater");
  }
  
  return 0;
}
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  


