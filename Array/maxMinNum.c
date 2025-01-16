#include<stdio.h>

int main() {

    int n, i, max, min;

    printf("Enter number of array indexes 'n' = ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);

    int num[n];

    for (i=0; i<n; i++) {
        scanf("%d", &num[i]);
    }

    max = num[1];
    min = num[1];

    for (i=1; i<n; i++) {
        if(max<num[i]) {
            max = num[i];
        }

        if(min>num[i]) {
            min = num[i];
        }
    }

    printf("Maximum number = %d \n", max);
    printf("Minimum number = %d \n", min);

    return 0;
}