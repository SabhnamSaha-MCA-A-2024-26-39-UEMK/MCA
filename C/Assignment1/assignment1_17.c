#include <stdio.h>

int main() {
    int year;
    printf("\n*** Program to check a year is leap year or not ***");
    printf("\n Name:SABHNAM SAHA,Class: MCA1A, Roll 44 \n");
    printf("Enter a year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
    return 0;
}

