// 2. Simple Calculation in c language

#include<stdio.h>

int main(){
     int  no,a,b,c,area,total,choice;
	float ans;
	printf("1.addition\n2.Subtraction\n3.multiplication\n4.Division\n5.Modulo\n");
	
	printf("Enter Your choice : ");
	scanf("%d",&choice);
    
    switch(choice){
    	
	case 1:
		
		printf("Enter NO.1  : ");
	scanf("%d",&a);
	
	printf("Enter No.2  : ");
	scanf("%d",&b);
		
		total=a+b;
		
		printf("\nAddition of Answer  is : %d",total);
	
	break ;
	
	case 2:
		
		printf("Enter NO.1 : ");
	scanf("%d",&a);
	
	printf("Enter No.2 : ");
	scanf("%d",&b);
	
	total=a-b;
	
	printf("\nSubtraction of Answer  is : %d",total);
	
	break;
	case 3:
	
	printf("Enter NO.1 : ");
	scanf("%d",&a);
	
	printf("Enter no.2 : ");
	scanf("%d",&b);
	
	c=a*b;
	
	printf("\nMultiplication of Answer is : %d",c);
	
	break;
	
	case 4:
		
		printf("Enter NO.1 : ");
	scanf("%d",&a);
	
	printf("Enter no.2 : ");
	scanf("%d",&b);
	
	ans=a/b;
	
	printf("\nDivision of Answer is :%.2f",ans);
		
		break ;
		
		case 5:
		
		printf("Enter NO.1 : ");
	scanf("%d",&a);
	
	printf("Enter No.2 : ");
	scanf("%d",&b);
	
	ans=a%b;
	
	printf("\nModulo of Answer  is : %.2f",ans);
	
	break;
		
		default :
				printf("\nplease enter valid choice number");
				
} return 0;
		
}
