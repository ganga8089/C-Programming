#include <stdio.h>
struct student{
  int rollNo;
  char name[20];
  float cgpa;
};
int main(){
  struct student s[5];
  for(int i=0;i<5;i++){
    printf("\n Enter roll number:");
    scanf("%d",&s[i].rollNo);
    printf("\n Enter name:");
    scanf("%s",s[i].name);
    printf("\n Enter CGPA:");
    scanf("%f",&s[i].cgpa);
  }
  printf("\n The student details:");
  for(int i=0;i<5;i++){
    printf("\n Name:%s\n Roll Number:%d\n CGPA:%f",s[i].name,s[i].rollNo,s[i].cgpa);
  }
  return 0;
}
