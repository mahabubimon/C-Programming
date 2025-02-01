#include<stdio.h>
#include<string.h>

struct Person {
        char name[50];
        int age;
        float salary;
    };

void printPerson(struct Person person) {
    printf("\nName: %s\n", person.name);
    printf("Age: %d\n", person.age);
    printf("Salary: %.2f\n", person.salary);
}

int main() {
    
    struct Person person1, person2;

    strcpy(person1.name, "Pabel Mahabub");
    person1.age = 28;
    person1.salary = 30000.00; 

    strcpy(person2.name, "Jihan Mahabub");
    person1.age = 22;
    person1.salary = 10000.00; 


    printPerson(person1);
    printPerson(person2);

    return 0;
}