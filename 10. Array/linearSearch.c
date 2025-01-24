#include<stdio.h>

int main() {

    int lucasArr[] = {2, 1, 3, 4, 7, 11, 18, 29, 47, 76, 123, 199, 322, 521, 843}, num, i, position = -1;

    printf("Enter any number of 15 items Lucas series = ");
    scanf("%d", &num);

    for (i=0; i<sizeof(lucasArr)/4; i++) {
        if (lucasArr[i] == num) {
            position = i+1;
            break;
        }
    }

    if (position != -1) {
        printf("Position of %d in 15 items Lucas series = %d. \n", num, position);
    } else {
        printf("%d is not found in 15 items Lucas series. \n", num);
    }

    return 0;
}