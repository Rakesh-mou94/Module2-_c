#include <stdio.h>

main()
{
    int i;

    printf("Printing numbers from 1 to 10:\n");
    for(i = 1; i <= 10; i++)
    {
        if(i == 3)
        {
            continue;   // skip printing 3
        }
        if(i == 5)
        {
            break;      // stop loop when 5 is reached
        }
        printf("%d\n", i);
    }

    return 0;
}
