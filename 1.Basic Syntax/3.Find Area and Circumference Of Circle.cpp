// 3.Find Area and Circumference Of Circle

#include<stdio.h>

int main(){
	
	int r,num;
	float area ;
	
	printf("1.Find Area\n.2.Find Circumference\n");
	
	printf("Enter Your Choice Number : ");
	scanf("%d",&num);
	
	switch(num){
		
		case 1:
			printf("Enter the Value of Radius : ");
	          scanf("%d",&r);
    
          area = 3.14*r*r;
    
          printf("Area of  Circle :%.2f",area);
     
	 break ;
      
      case 2:
       
       printf("Enter the Value of radius : ");
        scanf("%d",&r);
        
        area = 2*3.14*r;
        
        printf("Area of Circumference is :%f",area);
        
       
	}
	
}
