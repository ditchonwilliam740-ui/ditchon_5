#include <stdio.h>

int main(void)
{
    int students, days, overdue = 0;
    double total = 0;

    printf("Number of students: ");
    scanf("%d", &students);

    for (int i = 1; i <= students; i++) {
        printf("Days overdue for student %d: ", i);
        scanf("%d", &days);

        int penalty = days > 0 ? days * 5 : 0;
        printf("Student %d penalty: P%d\n", i, penalty);
        total += penalty;
        if (days > 0) overdue++;
    }

    printf("Total penalties: P%.2f\n", total);
    printf("Students with overdue books: %d\n", overdue);
    return 0;
}