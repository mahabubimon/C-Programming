#include<stdio.h>

int main() {

    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("You entered: %d %d %d\n", num1, num2, num3);

    // Compare the numbers
    if (num1 > num2 && num1 > num3) {
        printf("The largest number is %d\n", num1);
    } else if (num2 > num1 && num2 > num3) {
        printf("The largest number is %d\n", num2);
    } else if (num3 > num1 && num3 > num2) {
        printf("The largest number is %d\n", num3);
    } else {
        printf("All numbers are equal.\n");
    }

    return 0;
}