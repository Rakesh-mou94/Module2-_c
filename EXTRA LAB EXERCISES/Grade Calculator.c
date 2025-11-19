#include <stdio.h>

int main() {
    int marks;
    int gradeCase;

    printf("Enter marks: ");
    scanf("%d", &marks);

    // Convert marks to a category
    if (marks > 90)
        gradeCase = 1;
    else if (marks > 75)
        gradeCase = 2;
    else if (marks > 50)
        gradeCase = 3;
    else
        gradeCase = 4;

    // Use switch to print grade
    switch (gradeCase) {
        case 1:
            printf("Grade A\n");
            break;
        case 2:
            printf("Grade B\n");
            break;
        case 3:
            printf("Grade C\n");
            break;
        case 4:
            printf("Grade D\n");
            break;
        default:
            printf("Invalid Marks\n");
    }

    return 0;
}
