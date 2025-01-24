#include<stdio.h>
#include<string.h>

int main() {

    char str1[] = "Bangladesh", str2[] = "Turkiye";

    printf("\nFirst string: %s", str1);
    printf("\nSecond string: %s\n", str2);

    int d = strcmp(str1, str2);

    if (d==0) {
        printf("Two string is same.\n");
    } else {
        printf("Two string is not same.\n");
    }

    return 0;
}