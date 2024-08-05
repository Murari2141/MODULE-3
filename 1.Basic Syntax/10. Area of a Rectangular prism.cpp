// 10. Area of a Rectangular prism 

#include<stdio.h>

int main(){
	
	int A,w,l,h;
	
	printf("Enter the value of Width : ");
	scanf("%d",&w);
	
	printf("Enter the value of Length : ");
	scanf("%d",&l);
	
	printf("Enter the value of Height : ");
	scanf("%d",&h);
	
	A = 2*((w*l)*(h*l)*(h*w));
	
	printf("Area of a Rectangular prism is : %d",A);
}
