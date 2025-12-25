#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
float eggs, bread, butter;
float subtotal, tax, grandtotal;

printf("enter the price of eggs: $");
scanf("%f", &eggs);

printf("enter the price of bread: $");
scanf("%f", &bread);

printf("enter the price of butter: $");
scanf("%f", &butter);

subtotal = eggs + bread + butter;
tax = subtotal * 0.17;
grandtotal = subtotal + tax;

printf("\n ---------------- \n");
printf("shop receipt \n");
printf("\n ---------------- \n");
printf("list of items: \n");
printf("eggs: %.2f $ \n", eggs);
printf("bread: %.2f $ \n", bread);
printf("butter: %.2f $ \n",butter);
printf("\n ---------------- \n");
printf("subtotal: %.2f $ \n", subtotal);
printf("tax (17%): %.2f $ \n", tax);
printf("\n ---------------- \n");
printf("grand total is: %.2f $ \n", grandtotal);
printf("\n ---------------- \n");
return 0;
}
