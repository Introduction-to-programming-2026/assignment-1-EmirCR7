#include <stdio.h>

/*
TASK 6: Magic Numbers
*/

int main(void) {
    // TODO 1: define constants
    const double QUIZ_WEIGHT = 0.40;
    const double EXAM_WEIGHT = 0.60;
    const int PASS_SCORE = 50;
    const int MIN_SCORE = 0;
    const int MAX_SCORE = 100;

    double quiz = 0.0;
    double exam = 0.0;

    printf("Enter quiz score (0-100): ");
    scanf("%lf", &quiz);

    printf("Enter exam score (0-100): ");
    scanf("%lf", &exam);

    // TODO 3: validate inputs
    if (quiz < MIN_SCORE || quiz > MAX_SCORE || exam < MIN_SCORE || exam > MAX_SCORE) {
        printf("Invalid input! Scores must be between %d and %d.\n", MIN_SCORE, MAX_SCORE);
        return 1;
    }

    // TODO 2: compute finalScore
    double finalScore = quiz * QUIZ_WEIGHT + exam * EXAM_WEIGHT;

    printf("\nFinal score: %.2f\n", finalScore);

    // TODO 4: PASS/FAIL
    if (finalScore >= PASS_SCORE) {
        printf("Status: PASS\n");
    } else {
        printf("Status: FAIL\n");
    }

    // Extra messages
    if (finalScore >= 90) {
        printf("Excellent!\n");
    } else if (finalScore < 50) {
        printf("Needs improvement\n");
    }

    return 0;
}