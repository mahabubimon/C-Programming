#include<stdio.h>

int main() {
    // Swap two numbers
    int num1= 5, num2= 8, temp;
    printf("\nBefore swap: num1= %d, num2= %d\n", num1, num2);

    temp= num1;
    num1= num2;
    num2= temp;

    printf("After swap: num1= %d, num2= %d\n \n", num1, num2);

    // Swap two numbers without temp var.
    int num3= 12, num4= 15;
    printf("Before swap: num3= %d, num4= %d\n", num3, num4);

    num3= num3 + num4;
    num4= num3 - num4;
    num3= num3 - num4;

    printf("After swap: num3= %d, num4= %d\n", num3, num4);

    return 0;
}