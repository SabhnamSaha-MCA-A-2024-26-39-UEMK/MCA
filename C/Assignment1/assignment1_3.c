#include<stdio.h>
int main()
{
	int n,a=0,b=1,c;
	printf("\n*** Program for find the sum of the digits of a number ***");
        printf("\n Name:SABHNAM SAHA,Class: MCA1A, Roll 44");
	printf("\n Enter number of elements in the fibonacii series");
	scanf("%d",&n);
	printf("\n The series is- \n");
	printf("%d, ",a);
	printf("%d, ",b);
	for (int i =3;i<=n;i++)
	{
		c=a+b;
		printf("%d, ",c);
		a=b;
		b=c;
	}
	return 0;
}

