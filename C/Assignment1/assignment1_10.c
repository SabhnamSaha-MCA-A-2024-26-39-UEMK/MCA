#include<stdio.h>
int main()
{
	printf("\n*** Program to convert celcius to fahrenheit and vice-versa ***");
        printf("\n Name:SABHNAM SAHA,Class: MCA1A, Roll 44 \n");
    float celsius,fahrenheit;
    printf("\n Enter the Temparature in Celsius : ");
    scanf("%f",&celsius); 
    printf("\n Enter the Temparature in Fahrenheit : ");
    scanf("%f",&fahrenheit);
    fahrenheit = (1.8 * celsius) + 32;
    printf("\n Temperature in Fahrenheit : %f ",fahrenheit);
    celsius = ((fahrenheit-33)*5)/9;
    printf("Temperature in Celcuis is = %f",celsius);
    return 0;
}
