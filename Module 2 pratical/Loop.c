#include <stdio.h>

int main()
{
    int i;

    // --- WHILE LOOP ---
    printf("Using while loop:\n");
    i = 1;  // initialization
    while (i <= 10)  // condition
    {
        printf("%d\n", i);
        i++;  // modification
    }

    // --- FOR LOOP ---
    printf("\nUsing for loop:\n");
    for (i = 1; i <= 10; i++)  
    {
        printf("%d\n", i);
    }

    // --- DO-WHILE LOOP ---
    printf("\nUsing do-while loop:\n");
    i = 1;  
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 10);

    return 0;
}
