// 15. Convert school’s name in abbreviated form

#include<stdio.h>

int main() {
 
  char fname[50], mname[50], lname[50];
  
  printf("Enter The First Name, Middle Name and Last Name \n");
  scanf("%s %s %s", fname, mname, lname);
  
  printf("Abbreviated School Name:%c. %c. %s\n ",fname[0], mname[0], lname);
  
  
  
  return 0;

}
