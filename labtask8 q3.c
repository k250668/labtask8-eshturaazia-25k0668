#include <stdio.h>
int main() {
	int i;
	int j;
	int row;
	int sum=0;
	int empty = 0;
	int student = 0;
	printf("Classroom Seating chart\n");
	printf("=======================\n");
	printf("(x = student , o = empty)\n");
	printf("\n");
	for (i = 1 ; i<6;i++) {
		printf("Row %d ", i);
		if(i % 2 != 0) {
				for ( j = 1; j <6 ; j++) {
				if(j % 2 != 0) {
						printf(" x ");
						student++;
					}
			    else {
				   printf(" O ");
				   empty++;
			}	
		}
		printf("\n");
			}
	    else if ( i %2 == 0) {
	    	for ( j = 1; j <6 ; j++) {
				if(j % 2 != 0) {
						printf(" O ");
						empty++;
					}
			    else {
				   printf(" x ");
				   student++;
			}	
		}
	    printf("\n");	
		}
		
	}
	printf("\n");
	sum = student + empty;
	printf("SUMMARY:\n");
	printf("Students: %d\n", student);
	printf("Empty desks: %d\n", empty);
	printf("Total desks: %d\n", sum);
}