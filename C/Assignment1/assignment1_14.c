#include <stdio.h> 

int main() 
{ 
	int A;
	printf("\n*** Program to check a number is positive,negative or zero ***");
        printf("\n Name:SABHNAM SAHA,Class: MCA1A, Roll 44 \n");

	printf("Enter the number A: "); 
	scanf("%d", &A); 

	if (A > 0) 
		printf("%d is positive.", A); 
	else if (A < 0) 
		printf("%d is negative.", A); 
	else if (A == 0) 
		printf("%d is zero.", A); 

	return 0; 
} 


