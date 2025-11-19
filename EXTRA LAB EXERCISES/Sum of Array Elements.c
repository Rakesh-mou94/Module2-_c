#include <stdio.h>

int main() {
    int N, i;
    float sum = 0;

    printf("Enter how many numbers you want to enter: ");
    scanf("%d", &N);

    int arr[N];   // Array of size N

    // Taking input
    printf("Enter %d numbers:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculating sum
    for (i = 0; i < N; i++) {
        sum += arr[i];
    }

    printf("\nSum of array elements = %.2f\n", sum);

    return 0;
}
