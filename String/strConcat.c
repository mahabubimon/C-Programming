#include<stdio.h>
#include<string.h>

int main() {

    char str1[30] = "C Programming ";
    char str2[] = "Language";

    int i = 0, j=0, len = 0;

    // Concatenate string using strcat()
    // strcat(str1, str2);
    // len = strlen(str1);

    while (str1[i] != '\0') {
        len++; i++;
    }

    // Concatenate string using loop
    while (str2[j] != '\0') {
        str1[len+j] = str2[j];
        j++;
    }

    printf("Concatenate string: %s \n", str1);
    printf("Length 1st string: %d \n", len);

    return 0;
}