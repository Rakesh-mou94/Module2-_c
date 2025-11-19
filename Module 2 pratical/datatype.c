#include <stdio.h>
/*Write a C program that includes variables, constants, and comments. Declare
and use different data types (int, char, float) and display their values.
*/
 main() {
    int age = 18;         // integer variable
    float pi = 3.14;      // float variable
    char grade = 'A';     // character variable
    const int year = 2025; // constant

    printf("Age: %d\n", age);
    printf("Pi: %.2f\n", pi);
    printf("Grade: %c\n", grade);
    printf("Year: %d\n", year);

    return 0;
}
