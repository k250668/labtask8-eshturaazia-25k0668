#include <stdio.h>
int main(){
int i;
int j;
int num;
int multiple;
printf("Enter number of tables you want: ");
scanf("%d", &num);
printf("\n");
printf("Multiplication Table (1-%d) :", num);
printf("\n");
printf("\n");
for (i = 1 ; i<=num ; i++){
	printf("%d:", i);
	for(j = 1 ; j<=10;j++) {
		multiple = i*j;
		printf("%4d", multiple);
	}
	printf("\n");
}
	return 0;
}