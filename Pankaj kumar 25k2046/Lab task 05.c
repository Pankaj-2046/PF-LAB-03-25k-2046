
#include <stdlib.h>
#include <math.h>

int main() {
float principle_amount;
float annual_rate;
int annual_loan;
float monthly_rate;
int monthly_loan;
float emi;


printf("enter the principle amount: ");
scanf("%f", &principle_amount);

printf("enter the annual interest rate: ");
scanf("%f", &annual_rate);

printf("enter the duration of the loan: ");
scanf("%i", &annual_loan);

monthly_rate = annual_rate / (12 * 100);
monthly_loan = annual_loan * 12;
emi = (principle_amount * monthly_rate * (1 + monthly_rate) * pow(1 + monthly_rate, monthly_loan)) / ((1 + monthly_rate) * pow(1 + monthly_rate, monthly_loan) - 1 );

printf("\n -------------------- \n");
printf("    LOAN CALCUATION \n");
printf("\n -------------------- \n");

printf("loan amount: %.2f \n", principle_amount);
printf("duration: %i \n", annual_loan);
printf("interest rate: %.2f \n", annual_rate);
printf("your monthly emi is : %.2f \n", emi);


	return 0;
}
