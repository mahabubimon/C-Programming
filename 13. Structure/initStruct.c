#include<stdio.h>

int main() {

    struct Student {
        char name[50];
        int age;
        float marks;
    };

    struct Student student;

    printf("\nEnter name of student: ");
    gets(student.name);
    printf("Enter age of student: ");
    scanf("%d", &student.age);
    printf("Enter marks of student: ");
    scanf("%f", &student.marks);
    getchar();

    printf("\n\nStudent details:\n");
    printf("\nName: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}