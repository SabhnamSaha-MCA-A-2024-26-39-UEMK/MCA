#include <stdio.h>
int main()
{
    char ch;
     printf("\n*** Program to  check whether it is an alphabet, digit, or special character. ***");
    printf("\n Name:SABHNAM SAHA,Class: MCA1A, Roll 44 \n");
    printf("Input a character: ");
    scanf("%c", &ch);
 
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("This is an alphabet.\n");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("This is a digit.\n");
    }
    else
    {
        printf("This is a special character.\n");
    }
}
