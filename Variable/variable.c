#include<stdio.h>

int main(){
   // Variable declaration
    int num1= 5, num2= 8, sum;
    float num3= 8.123456;
    double num4= 26.123491015;
    char ch= 'C';

    // Variable initialization
    sum= num1 + num2;

    // Variable usage
    printf("\nSum of %d and %d is %d\n", num1, num2, sum);

    printf("float number= %f\n", num3);
    printf("double number= %lf\n", num4);
    printf("Char name= %c\n", ch);


    return 0;
}
