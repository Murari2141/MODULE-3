#include <stdio.h>

int main() {
    int customer_id;
    char customer_name[50];
    float units_consumed, total_amount;

    
    printf("Enter Customer ID: ");
    scanf("%d", &customer_id);

    printf("Enter Customer Name: ");
    scanf(" %s", customer_name);  

    printf("Enter Units Consumed: ");
    scanf("%f", &units_consumed);

    
    if (units_consumed <= 300) {
        total_amount = units_consumed * 1.20;
    } 
	else if (units_consumed > 300 && units_consumed <= 600) {
        total_amount = units_consumed * 1.50;
    } 
	else if (units_consumed > 600 && units_consumed <= 800) {
        total_amount = units_consumed  * 1.80;
    } 
	else if (units_consumed > 800) {
        total_amount = units_consumed  * 2.00;
    }

    // Apply surcharge if total amount exceeds Rs. 800
    if (total_amount > 800) {
       float surcharge = total_amount * 0.18;  
        total_amount += surcharge;
    }

    // Ensure minimum bill of Rs. 256
    if (total_amount < 256) {
        total_amount = 256;
    }
    
    
    
    printf("\nElectricity Bill\n");
    printf("*************************************************************************************\n");
    printf("Customer ID: %d\n", customer_id);
    printf("Customer Name: %s\n", customer_name);
    printf("------------------------------------------------------------------------------------\n");
    printf("Units Consumed: %.2f\n", units_consumed);
    printf("____________________________________________________________________________________\n");
    
    printf("Total Amount to be Paid: Rs. %.2f\n", total_amount);

    return 0;
}

