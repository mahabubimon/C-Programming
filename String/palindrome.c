#include<stdio.h>
#include<string.h>

int main() {

    char str1[] = "madam", rev[20];
    
    int i, j, len = strlen(str1);

    for (i=0, j=len-1; i<len; i++) {
        rev[i] = str1[j]; j--;
    }

    int d = strcmp(str1, rev);

    if (d==0) {
        printf("The string is palindrome.\n");
        
    } else {
        printf("The string is not palindrome.\n");
    }

    return 0;
}