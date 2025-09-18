#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main( ) {
	
	int severity;
	printf("Classify the severity of the incident (1-4) : ");
	scanf(" %d", &severity);
	
	switch (severity) {
		case 1: 
		printf("Low: Unusual login time");
		break;
		case 2: 
		printf("Medium: suspicious failed attempts");
		break;
		case 3: 
		printf("High: Multiple accounts targetted");
		break;
		case 4: 
		printf("Critical: Brute force/DDos attack detected");
		break;
		default:
		printf("Invalid code: Enter a number between 1 and 4");
	} 
	return 0;
}
