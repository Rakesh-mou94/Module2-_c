#include<stdio.h>

// declaration
int fact(int n);
main()
{
    int number;

    printf("\n Enter only positive number: ");
    scanf("%d",&number);

    if(number < 0)
    {
        printf("Factorial is not defined for negative numbers\n");
    }
    else
    {
        // function call
        printf("\n Factorial of %d is %d\n", number, fact(number));
    }

    return 0;
}

int fact(int n)
{
    int fact = 1, i;
    for(i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
