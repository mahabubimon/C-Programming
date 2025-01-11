#include<stdio.h>
#include<math.h>

int main() {
    // Program to check if a number is an Armstrong number or not
    int num, temp, rem, cube = 3, sum = 0; 

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp != 0) {
        rem = temp % 10;
        sum += pow(rem, cube);
        temp = temp / 10;
    }

    if(num == sum) {
        printf("The number is an Armstrong number.\n");
    } else {
        printf("The number is not an Armstrong number.\n");
    }

    return 0;
}