#include <stdio.h>

int main() {
    int score = 0, answer;

    printf("=== Simple Quiz Application ===\n\n");

    printf("1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2) {
        score++;
    }

    printf("\n2. How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3) {
        score++;
    }

    printf("\n3. Which language is used for C programming?\n");
    printf("1. High-level Language\n2. Markup Language\n3. Query Language\n4. None of these\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 1) {
        score++;
    }

    printf("\n=== Quiz Result ===\n");
    printf("Your Score = %d out of 3\n", score);

    if (score == 3)
        printf("Excellent!\n");
    else if (score == 2)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}