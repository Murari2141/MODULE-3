// 17.Calculate person’s insurance premium based on salary

#include<stdio.h>

int main(){
	
 float Salary, years, monthly_premium ;
 float quarterly_premium, half_yearly_premium, yearly_premium;
 
 printf("Enter your Salary:");
 scanf("%d", &Salary);
 
 printf("Enter life insurance policy term(in years):");
 scanf("%d", &years);
 
 printf("Your Monthly Premium    : %.2f\n", Salary/(years*12));
 printf("Your Quarterly Premium  : %.2f\n", Salary/(years*4));
 printf("Your Half Yearly Premium: %.2f\n", Salary/(years*2));
 printf("Your Yearly Premium     : %.2f\n", Salary/(years)); 
  
 return 0;
}

