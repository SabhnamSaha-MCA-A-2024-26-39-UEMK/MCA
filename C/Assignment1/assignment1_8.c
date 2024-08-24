#include <stdio.h>  
int main()  
{  printf("\n*** Program to check a number is Strong or Not ***");
        printf("\n Name:SABHNAM SAHA,Class: MCA1A, Roll 44 \n");
    int n,r,sum=0;  
    printf("Enter a number");  
    scanf("%d",&n);  
    int k=n;  
    while(k!=0)  
    {  
        r=k%10;  
        int f=fact(r);  
        k=k/10;  
        sum=sum+f;  
    }  
    if(sum==n)  
    {  
        printf("\nNumber is a strong");  
    }  
    else  
    {  
        printf("\nNumber is not a strong");  
    }  
    return 0;  
}  
int fact(int r)  
{  
    int mul=1;  
    for(int i=1;i<=r;i++)
        mul=mul*i;  
    return mul;  
      
} 
