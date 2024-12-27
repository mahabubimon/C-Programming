#include<stdio.h>

int main() {
    // Swap two numbers
    int num1= 10, num2= 20, temp;
    printf("Before swap: num1= %d, num2= %d\n", num1, num2);

    temp= num1;
    num1= num2;
    num2= temp;

    printf("After swap: num1= %d, num2= %d", num1, num2);

    return 0;
}