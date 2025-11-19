#include <stdio.h>

int main() {

    int num = 10;       // normal variable
    int *ptr;           // pointer variable

    ptr = &num;         // ptr stores the address of num

    // Before modification
    printf("Before modifying:\n");
    printf("Value of num = %d\n", num);
    printf("Address of num = %p\n", &num);
    printf("Pointer ptr stores address = %p\n", ptr);
    printf("Value at address stored in ptr = %d\n\n", *ptr);

    // Using pointer to modify the value of num
    *ptr = 20;          // changes num directly

    // After modification
    printf("After modifying using pointer:\n");
    printf("Value of num = %d\n", num);
    printf("Value at address stored in ptr = %d\n", *ptr);

    return 0;
}
