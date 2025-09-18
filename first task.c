#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main( ) {
	
	int student_id; 
	
	printf("enter your student id: ");
	scanf(" %d", &student_id);
	
	if (student_id == 2046) {
		printf("Valid user: Proceed to login");
	} else {
		printf("Unknown user: Access denied");
	}
	
	
	return 0;
}
