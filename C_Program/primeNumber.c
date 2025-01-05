#include<stdio.h>
#include<math.h>

int main() {
    // Count, print and sum of prime numbers between two numbers

    int startingNum, endingNum, countPrimeNumbers = 0, sumPrimeNumbers = 0, i, j, f=2;

    printf("Count, print and sum of prime numbers between two numbers.\n");

    printf("Enter starting number: ");
    scanf("%d", &startingNum);

    printf("Enter ending number: ");
    scanf("%d", &endingNum);

    // Check if starting number is less than ending number

    if (startingNum < endingNum && startingNum > 0 && endingNum > 1) {
        // Loop through the numbers to find prime numbers

        printf("Prime numbers between %d and %d are: ", startingNum, endingNum);

        for (i = startingNum; i <= endingNum; i++) {

            int count = 0;

            for (j = 2; j <= sqrt(i); j++) {
                if (i % j == 0) {
                    count++;
                    break;
                }
            }
            if (count == 0 && i > 1) {
                printf("%d, ", i);
                countPrimeNumbers++;
                sumPrimeNumbers += i;
            }
        }

        printf("\nTotal prime numbers between %d and %d are: %d\n", startingNum, endingNum, countPrimeNumbers);
        printf("Sum of prime numbers between %d and %d is: %d\n", startingNum, endingNum, sumPrimeNumbers);

    } else {
        printf("Invalid input!!! Enter ending number greater than 1. ");
        printf("Starting number should be less than ending number!!!\n");
    }

    return 0;
}