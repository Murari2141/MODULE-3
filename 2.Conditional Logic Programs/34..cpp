#include <stdio.h>

int main() {
    int month;

    
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    
    switch (month) {
        case 1:
		printf("Number of days in month %d is January.\n", month);  
        break ;
		case 3: 
		printf("Number of days in month %d is March.\n", month); 
        break ;
		case 5: 
		printf("Number of days in month %d is May.\n", month); 
        break ;
		case 7: 
		printf("Number of days in month %d is July.\n", month); 
        break ;
		case 8:  
		printf("Number of days in month %d is August.\n", month);
        break ;
		case 10: 
		printf("Number of days in month %d is October.\n", month);
		break ;                         // October
        case 12: 
		printf("Number of days in month %d is December.\n", month);
		break ;
        case 4:
		printf("Number of days in month %d is April.\n", month); 
		break ; 
        case 6:
		printf("Number of days in month %d is June.\n", month);  
        break ;
		case 9: 
		printf("Number of days in month %d is September.\n", month); 
        break ;
		case 11:
		printf("Number of days in month %d is November.\n", month); 
        break ;
		case 2:                                                         
            printf("Number of days in month %d is February.\n", month); 
            break;
            
        default:
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
    }

    return 0;
}

