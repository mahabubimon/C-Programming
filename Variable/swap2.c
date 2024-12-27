#include<stdio.h>

int main() {
    // Swap two numbers without temp var.
    int num1= 10, num2= 20;
    printf("Before swap: num1= %d, num2= %d\n", num1, num2);

    num1= num1 + num2;
    num2= num1 - num2;
    num1= num1 - num2;

    printf("After swap: num1= %d, num2= %d", num1, num2);
    return 0;
}