#include<stdio.h>
#include<math.h>

void calPow(double b, double e) {

    double result = 1, i;
    
    //using math function pow()
    // result = pow(b, e);

    for (i=1; i<=e; i++) {
        result = result * b;
    }

    printf("%.2lf to the power %.2lf= %.2lf\n", b, e, result);
}

int main() {
    
    double base, exp;

    printf("Enter base and exponent: ");
    scanf("%lf %lf", &base, &exp);

    calPow(base, exp);

    return 0;
}