#include <stdio.h>
#include <string.h>
#include <ctype.h>

void characterFrequency(char str[]) {
    int freq[256] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    printf("\nCharacter Frequency:\n");
    printf("--------------------\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            if (isspace(i)) {
                printf("' ' (space) : %d\n", freq[i]);
            } else {
                printf("  '%c'       : %d\n", i, freq[i]);
            }
        }
    }
}

int main() {
    char str[500];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Input String : \"%s\"", str);

    characterFrequency(str);

    return 0;
}