#include<stdio.h>

int main() {

    int n, i; 

    printf("Enter array length: ");
    scanf("%d", &n);

    int numArr[n], newArr[n];

    printf("Enter %d numbers: ", n);

    for(i=0; i<n; i++) {
        scanf("%d", &numArr[i]);
    }

    printf("Your array [] = { ");
    for (i=0; i<n-1; i++) {
        printf("%d, ", numArr[i]);
    }

    printf("%d", numArr[n-1]);
    printf(" }\n");

    // Copying arrNum value to newArr.
    for(i=0; i<n; i++) {
        newArr[i] = numArr[i];
    }

    printf("New array [] = { ");
    for (i=0; i<n-1; i++) {
        printf("%d, ", newArr[i]);
    }

    printf("%d", newArr[n-1]);
    printf(" }\n");

    return 0;
}