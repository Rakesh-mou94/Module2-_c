#include <stdio.h>

// Recursive function for Fibonacci
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int N, i;

    printf("Enter number of terms: ");
    scanf("%d", &N);

    printf("\nFibonacci Sequence (%d terms):\n", N);
    for (i = 0; i < N; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}

