#include <stdio.h>
int main() {
  char course, name[40], adm_no[10];
  int unit1, unit2, unit3, unit4, unit5, finalscore, averagemarks;

  printf("Welcome to the student management system\n");
  printf("Enter student's name\n");
  fgets(name, 40, stdin);   //read from stdin
  printf("Student name:%s\n", name);
  printf("Enter student admission number\n");
  fgets(adm_no, 10, stdin);
  printf("Admission number:%s\n", adm_no);
  printf("Enter your scores\n");
  scanf("%d%d%d%d%d\n", &unit1, &unit2, &unit3, &unit4, &unit5);
  printf("unit1:%d\nunit2:%d\nunit3:%d\nunit4:%d\nunit5:%d\n", unit1, unit2, unit3, unit4, unit5);
  averagemarks = ((unit1+unit2+unit3+unit4+unit5) / 5);
  printf("Your average score is %d\n:", averagemarks);
  finalscore = unit1 +unit2 +unit3 +unit4 +unit5;
  printf("Final score %d\n:", finalscore);

  if (unit1>=unit2 && unit1>=unit3 && unit1>=unit4 && unit1>=unit5) {
    printf("highest score is%d\n:", unit1);
  } else if (unit2>=unit1 && unit2>=unit3 && unit2>=unit4 && unit2>=unit5) {
    printf("Highest score is%d\n:", unit2);
  } else if(unit3>=unit1 && unit3>=unit2 && unit3>=unit4 && unit3>=unit5){
    printf("Highest score is %d\n:", unit3);
  } else if(unit4>=unit1 && unit4>=unit2 && unit4>=unit3 && unit4>=unit5){
    printf("highest score is %d\n:", unit4);
  }else {
    printf("Highest score is %d\n:", unit5);
  }

  if (unit1<=unit2 && unit1<=unit3 && unit1<=unit4 && unit1<=unit5) {
    printf("Least score %d\n:", unit1);
  } else if (unit2<=unit1 && unit2<=unit3 && unit2<=unit4 && unit2<=unit5) {
    printf("Least score %d\n:", unit2);
  } else if(unit3<=unit1 && unit3<=unit2 && unit3<=unit4 && unit3<=unit5){
    printf("Least score  %d\n:", unit3);
  } else if(unit4<=unit1 && unit4<=unit2 && unit4<=unit3 && unit4<=unit5){
    printf("Least score  %d\n:", unit4);
  }else {
    printf("Least score  %d\n:", unit5);
  }

  if (averagemarks>=70) {
    printf("Grade:A\nFirst class honors\n");
  } else if (averagemarks>=60) {
    printf("Grade:B\nSecond class upper\n");
  } else if (averagemarks>=50){
    printf("Grade:C\nsecond class lower\n");
  } else if(averagemarks>=40){
    printf("Grade:D\nPass\n");
  }else {
    printf("Grade:F\nYou have not met the course requirements kindly visit your admin for clarification\n");
  }


  return 0;
}
