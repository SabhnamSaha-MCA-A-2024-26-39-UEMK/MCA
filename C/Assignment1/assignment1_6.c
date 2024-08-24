#include<stdio.h>
int main(){
	int a, b,x,exp=0;

        printf("\n*** Program for find the value of the expression ***");
        printf("\n Name:SABHNAM SAHA,Class: MCA1A, Roll 44 \n");
	printf("\n Enter value of x, a and b");
	scanf("%d %d %d",&x,&a,&b);
	exp= ((a*x)+b)/((a*x)-b);
	printf("\n The value of the expression is = %d . \n",exp);
	return 0;
}

