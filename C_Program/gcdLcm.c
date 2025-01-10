#include<stdio.h>

int main() {
    // Find GCD and LCM of two numbers
    int num1, num2, tempNum1, tempNum2, gcd, lcm, remainder;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Find GCD
    tempNum1 = num1;
    tempNum2 = num2;

    while (tempNum1 != 0) {
        remainder = tempNum2 % tempNum1;
        tempNum2 = tempNum1;
        tempNum1 = remainder;
    }

    gcd = tempNum2;

    // Find LCM
    lcm = (num1 * num2) / gcd;

    printf("GCD of two numbers is: %d\n", gcd);
    printf("LCM of two numbers is: %d\n", lcm);

    return 0;
}