#include<stdio.h>
int main()
{
	int d,n,sum=0;
	printf("Enter any number with digits-");
	scanf("%d",&n);
	printf("\n*** Program for find the sum of the digits of a number ***");
        printf("\n Name:SABHNAM SAHA,Class: MCA1A, Roll 44");
	while (n>0)
	{
		d=n%10;
		sum=sum+d;
		n=n/10;

	}
	printf("\n The sum of the digits = %d",sum);
	return 0;
}
