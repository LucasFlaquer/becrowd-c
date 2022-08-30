#include<stdlib.h>
#include<stdio.h>
#define WEIGHT_ONE 3.5
#define WEIGHT_TWO 7.5
int main() {
	double grade1, grade2;
	scanf("%lf", &grade1);
	scanf("%lf", &grade2);
	double average = (grade1*WEIGHT_ONE + grade2*WEIGHT_TWO)/(WEIGHT_ONE + WEIGHT_TWO);
	printf("MEDIA = %.5lf\n", average);
	return 0;

}
