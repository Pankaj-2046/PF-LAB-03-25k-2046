#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main( ) {
	char customer_name[50];
	int units_consumed;
	float price_per_unit;
	float total;
	
	printf("Enter name: ");
	scanf(" %s", customer_name);
	
	printf("enter units consumed: ");
	scanf("%i", &units_consumed);
	
	printf("enter price per units: ");
	scanf("%f", &price_per_unit);
	
	total = units_consumed * price_per_unit;
	
	printf("\n ------------------- \n");
	printf("     ELECTRICITY BILL \n");
	printf("\n ------------------- \n");
	printf("customer name: %s \n", customer_name);
	printf("units_consumed: %i \n", units_consumed);
	printf("price per units: %.2f \n", price_per_unit);
	printf("\n ------------------- \n");
	printf("total bill: %.2f pkr \n", total);
	printf("\n ------------------- \n");
	
	return 0;
}

