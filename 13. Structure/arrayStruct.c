#include<stdio.h>

int main() {

    struct Student {
        char name[50];
        int age;
        float marks;
    };

    struct Student student[5];

    for(int i=0; i<5; i++) {
        printf("\nEnter name of student %d: ", i+1);
        gets(student[i].name);
        printf("Enter age of student %d: ", i+1);
        scanf("%d", &student[i].age);
        printf("Enter marks of student %d: ", i+1);
        scanf("%f", &student[i].marks);
        getchar();
    }

    printf("\n\nStudent details:\n");
    for(int i=0; i<5; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("Name: %s\n", student[i].name);
        printf("Age: %d\n", student[i].age);
        printf("Marks: %.2f\n", student[i].marks);
    }

    return 0;
}