#include <stdio.h>
#include <string.h>

void removeSpaces(char str[], char result[]) {
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
}

int main() {
    char str[500];
    char result[500];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Original String : \"%s\"\n", str);

    removeSpaces(str, result);

    printf("After Removing  : \"%s\"\n", result);

    return 0;
}