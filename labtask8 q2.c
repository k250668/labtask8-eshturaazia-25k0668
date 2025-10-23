#include <stdio.h>
int main() 
{
	int i;
	int j;
	int maximum;
	int row,column;
	int matrix[3][3] = {
	{12,34,56} , {72,4,6} , {90,67,12}
	};
	maximum = matrix[0][0];
	for (i=0;i<3;i++) {
		for (j=0;j<3;j++) {
			if(matrix[i][j] > maximum) {
				maximum = matrix[i][j];
				row = i;
				column = j;
			}
		}
	}
	printf("Largest number is %d in row %d and column %d", maximum,row+1,column+1);


	return 0;
}