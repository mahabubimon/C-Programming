#include<stdio.h>

int main() {

    int n, i; 

    printf("Enter array length: ");
    scanf("%d", &n);

    int numArr[n], revArr[n];

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

    // reversing arrNum value to revArr.
    for(i=0; i<n; i++) {
        revArr[i] = numArr[n-1-i];
    }

    printf("Reverse array [] = { ");
    for (i=0; i<n-1; i++) {
        printf("%d, ", revArr[i]);
    }

    printf("%d", revArr[n-1]);
    printf(" }\n");

    return 0;
}