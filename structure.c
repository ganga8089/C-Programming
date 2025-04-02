#include <stdio.h>
struct student{
  int rollNo;
  char name[20];
  float cgpa;
};
int main(){
  struct student s1;
  printf("\n Enter roll number:");
  scanf("%d",&s1.rollNo);
  printf("\n Enter name:");
  scanf("%s",s1.name);
  printf("\n Enter CGPA:");
  scanf("%f",&s1.cgpa);
  printf("\n The student details:");
  printf("\n Name:%s\n Roll Number:%d\n CGPA:%f",s1.name,s1.rollNo,s1.cgpa);
  return 0;
}
