#include <stdio.h>

/*
TASK 3: Conditional Statements
*/

int main(void) {
    int score = -1;

    printf("Enter exam score (0-100): ");
    scanf("%d", &score);

    // Validate score range
    if (score < 0 || score > 100) {
        printf("Invalid score\n");
        return 0;   // programı burada bitiriyoruz
    }

    // Grade logic
    if (score >= 90) {
        printf("Grade: A\n");
        if (score == 100) {
            printf("Perfect score!\n");
        }
    }
    else if (score >= 80) {
        printf("Grade: B\n");
    }
    else if (score >= 70) {
        printf("Grade: C\n");
    }
    else if (score >= 60) {
        printf("Grade: D\n");
    }
    else {
        printf("Grade: F\n");
    }

    return 0;
}