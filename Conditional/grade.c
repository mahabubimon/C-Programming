#include<stdio.h>

int main() {

    // Program to check the grade of a student
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks <= 100 && marks >= 0) {
        if (marks >= 80) {
        printf("Grade A+\n");
        } else if (marks >= 70) {
        printf("Grade A\n");
        } else if (marks >= 60) {
        printf("Grade A-\n");
        } else if (marks >= 50) {
        printf("Grade B\n");
        } else if (marks >= 40) {
        printf("Grade C\n");
        } else if (marks >= 33) {
        printf("Grade D\n");
        } else {
        printf("Grade F\n");
        }
    } else {
        printf("Invalid marks.\nPlease enter marks between 0 and 100.\n");
    }

    return 0;
}