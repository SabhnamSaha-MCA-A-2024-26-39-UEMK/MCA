#include<stdio.h>
int main(){
	int i,j,c=0,n;
	printf("Enter value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		
		c=0;
		for(j=1;j<=i;j++){
			if(i%j==0){
				c=c+1;
			}
		}
			if(c==2)
				printf("\n %d is PRIME \n",i);
	}

return 0;
}
