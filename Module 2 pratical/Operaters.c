#include <stdio.h>

/*Write a C program that accepts two integers from the user and performs
arithmetic, relational, and logical operations on them. Display the results.
*/

int main() {
    int a, b;

    // Input
    printf("Enter one integer: ");
    scanf("%d", &a);
    
    printf("Enter Second integer:");
    scanf("%d", &b);

    // Arithmetic
    printf("\nArithmetic:\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
	printf("a % b = %d\n", a % b);

    // Relational
    printf("\nRelational:\n");
    printf("a == b : %d\n", a == b);
    printf("a > b  : %d\n", a > b);
    printf("a < b  : %d\n", a < b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n", a <= b);
    printf("a != b : %d\n", a != b);
    
    // Logical
    printf("\nLogical:\n");
    printf("a && b : %d\n", a && b);
    printf("a || b : %d\n", a || b);
    printf("!a     : %d\n", !a);

    return 0;
}
