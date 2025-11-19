#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int temp = num;  // store original value

    while (temp != 0) {
        digit = temp % 10;      // get last digit
        sum += digit;           // add to sum
        temp /= 10;             // remove last digit
    }

    printf("Sum of digits of %d = %d\n", num, sum);

    return 0;
}
