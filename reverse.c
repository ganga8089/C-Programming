#include<stdio.h>
int main(){
  char str[50];
  printf("Enter a string: \n");
  fgets(str,sizeof(str),stdin);
  int length;
  for (length=0;str[length]!='\0';length++);
  int i=length-1;
  for(int j=0;j<length/2;j++){
    char temp=str[i];
    str[i]=str[j];
    str[j]=temp;
    i--;
  }
  printf("\n The reversed string:");
  puts(str);
  return 0;
}
  
