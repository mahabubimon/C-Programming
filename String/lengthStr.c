#include<stdio.h>

int main() {

    char myName[] = "Pabel Mahabub Emon";

    // Finding length using strlen() function
    // int i, len = strlen(name); 

    // Finding length using loop
    int i, len = 0;
   
    while(myName[i] != '\0') {
        len += 1;
        i++;
    }

    printf("\nName: %s", myName);
    printf("\nLength of name: %d\n", len);

    return 0;
}