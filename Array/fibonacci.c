#include<stdio.h>

int main() {

    int n, i;

    printf("Enter fibonacci series range 'n' = ");
    scanf("%d", &n);

    int fibArr [n]; 

    fibArr[0] = 0; 
    fibArr[1] = 1;

    for (i=2; i<n; i++) {
        fibArr[i] = fibArr[i-1] + fibArr[i-2];
    }

    printf("%d items fibonacci series = ", n);

    for (i=0; i<n; i++) {
        printf("%d ", fibArr[i]);
    }

    printf(". \n");

    return 0;
}