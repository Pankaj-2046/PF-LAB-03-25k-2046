#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main( ) {
	
	int login_attempts;
	printf("How many login attempts have there been? ");
	scanf(" %d", &login_attempts);
	
	if (login_attempts == 0) {
		printf("No suspicious activity");
	} 
	else if (login_attempts == 1 || login_attempts <= 3 ) {
		printf("Warning: User may have forgotten the password");
	} 
	else if (login_attempts == 4 || login_attempts <= 6) {
		printf("Alert: Possible unauthorized access attempt");
	} 
	else {
	printf("Critical: Account Locked due to brute-force attempt");
	} 
	return 0;
}
