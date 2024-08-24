#include<stdio.h>    
int main()  
{
	printf("\n*** Program to check a number is Perfect or Not ***");
        printf("\n Name:SABHNAM SAHA,Class: MCA1A, Roll 44 \n");
int num, rem, sum = 0, i;  
printf("Enter a number\n");  
scanf("%d", &num);        
for(i = 1; i < num; i++){
	rem = num %i;
	if (rem == 0)
	{
		sum = sum + i;
	}
}  
if (sum == num)  
                      printf("Perfect Number");  
           else  
                      printf("not a Perfect Number");  
return 0;  
} 
