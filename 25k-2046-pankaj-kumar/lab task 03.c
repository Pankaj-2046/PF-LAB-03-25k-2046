#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main( ) {
	
	float distance;
	float fuel_used;
	float fuel_price;
	float fuel_average;
	float total_cost;
	
	printf("enter distance travelled: ");
	scanf(" %f", &distance);
	
	printf("enter fuel used:  ");
	scanf(" %f", &fuel_used);
	
	printf("enter price of fuel: ");
	scanf(" %f", &fuel_price);
	
	fuel_average = distance / fuel_used;
	total_cost = fuel_price * fuel_used;
	
	printf("\n ----------------- \n");
	printf(" FULL REPORT \n");
	printf("\n ----------------- \n");
	
	printf("distance: %.1f km \n", distance);
	printf("fuel used: %.1f litres \n", fuel_used);
	printf("efficiency: %.2f km/L \n", fuel_average);
	printf("total cost: %.2f PKR", total_cost);
	return 0;
}
