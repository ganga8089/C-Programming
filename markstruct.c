#include <stdio.h>
struct student{
  int rollNo;
  char name[20];
  int m1,m2,m3;
};
int main(){
  int n;
  printf("\n Enter the limit:");
  scanf("%d",&n);
  struct student s[n];
  for(int i=0;i<n;i++){
    printf("\n Enter roll number:");
    scanf("%d",&s[i].rollNo);
    printf("\n Enter name:");
    scanf("%s",s[i].name);
    printf("\n Enter mark 1:");
    scanf("%d",&s[i].m1);
    printf("\n Enter mark 2:");
    scanf("%d",&s[i].m2);
    printf("\n Enter mark 3:");
    scanf("%d",&s[i].m3);
  }
  int tot=0;
  for(int i=0;i<n;i++){
    tot+=s[i].m1+s[i].m2+s[i].m3;
  }
  int avg=tot/n;
  printf("Average=%d\n Total=%d",avg,tot);
  return 0;
}
