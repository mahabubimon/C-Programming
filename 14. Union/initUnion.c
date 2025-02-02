#include<stdio.h>
#include<string.h>

int main() {

    union Person {
        char name[50];
        int age;
        float salary;
    } person1, person2;

    strcpy(person1.name, "Pabel Mahabub");
    person1.age = 28;
    person1.salary = 30000.00;

    strcpy(person2.name, "Jihan Mahabub");
    person2.age = 22;
    person2.salary = 10000.00;

    printf("\nName: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Salary: %.2f\n", person1.salary);

    printf("\nName: %s\n", person2.name);
    printf("Age: %d\n", person2.age);
    printf("Salary: %.2f\n", person2.salary);

    return 0;
}