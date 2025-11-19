#include <stdio.h>

int main() {
    int n, row, col, val;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (row = 0; row < n; row++) {

        // Print leading spaces
        for (col = 0; col < n - row - 1; col++) {
            printf(" ");
        }

        val = 1; // First value in every row is 1

        for (col = 0; col <= row; col++) {
            printf("%d ", val);
            val = val * (row - col) / (col + 1);
        }

        printf("\n");
    }

    return 0;
}
