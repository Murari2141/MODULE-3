// 16. Convert country’s name in abbreviate form

#include<stdio.h>

int main() {
 
  char fname[50], fmname[50], mname[50], lname[50];
  
  printf("Enter The First Name, first middle name, Middle Name and Last Name \n");
  scanf("%s %s %s %s", fname, fmname, mname, lname);
  
  
  printf("Abbreviated Country Name:%c%c%c\n ",fname[0], fmname[0], mname[0], lname[0]);
  
  
  
  return 0;

}



