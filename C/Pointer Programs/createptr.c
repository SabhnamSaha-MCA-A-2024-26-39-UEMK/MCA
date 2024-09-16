#include <stdio.h>
int main() {
    int num = 10;
    int *ptr = &num;
    printf("Value of num: %d\n", *ptr);
    printf("Address of num: %p\n", ptr);
    *ptr = 20;
    printf("New value of num: %d\n", num);
    return 0;
}
