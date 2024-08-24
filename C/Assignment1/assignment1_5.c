#include<stdio.h>
#include<math.h>
int main(){
	int n,m,r,c=0,res=0,d,i,original;
	printf("\n*** Program for find the sum of the digits of a number ***");
        printf("\n Name:SABHNAM SAHA,Class: MCA1A, Roll 44");
        printf("Enter a number:-");
	scanf("%d",&n);
	original=n;
	m=n;
	while(n>0){
	d=n%10;
	c=c+1;
	n=n/10;
	}
	printf("number of digits = %d",c);
	while(m>0){
		d=m%10;
		r=1;
		for(i=1;i<=c;i++)
		{
			r=r*d;
		}
		res=res+r;
		m=m/10;
	}
	if (res==original)
		printf("ARMSTRONG");
	else
		printf("Not Armstrong");
	return 0;
}
