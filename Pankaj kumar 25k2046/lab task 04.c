#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main( ) {
	
	float mark_1, mark_2, mark_3, mark_4, mark_5;
	float total_marks, percentage, CGPA;
	
	printf("enter marks for all 5 subjects: ");
	scanf(" %f %f %f %f %f",&mark_1, &mark_2, &mark_3, &mark_4, &mark_5);
	
	total_marks = mark_1 + mark_2 + mark_3 + mark_4 + mark_5;
	percentage = (total_marks / 500) * 100;
	CGPA = (percentage / 100) * 4;
	
	printf("\n ----------------- \n");
	printf(" STUDENT RESULT \n");
	printf("\n ----------------- \n");
	
	printf("marks: %.2f %.2f %.2f %.2f %.2f \n ", mark_1, mark_2, mark_3, mark_4, mark_5);
	printf("total marks: %.1f \n", total_marks);
	printf("total percentage: %.2f", percentage);
	printf("CGPA: %.2f/4.00", CGPA);
	
	return 0;
}
