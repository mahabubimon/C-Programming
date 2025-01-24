#include<stdio.h>

int main() {

    // Sum and average of three numbers
    int num1, num2, num3, sum;
    float average;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    average = (float) sum / 3;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}