#include <stdio.h>
struct employee{
  int ID;
  char name[20];
  int sal;
};
int main(){
  int n;
  printf("\n Enter the limit:");
  scanf("%d",&n);
  struct employee emp[n];
  for(int i=0;i<n;i++){
    printf("\n Enter ID:");
    scanf("%d",&emp[i].ID);
    printf("\n Enter name:");
    scanf("%s",emp[i].name);
    printf("\n Enter salary:");
    scanf("%d",&emp[i].sal);
  }
  printf("\n The employee details:");
  for(int i=0;i<n;i++){
    printf("\n Name:%s\n ID:%d\n Salary:%d",emp[i].name,emp[i].ID,emp[i].sal);
  }
  return 0;
}
