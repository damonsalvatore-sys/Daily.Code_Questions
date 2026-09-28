#include <stdio.h>

/*
Question:
Write a C program to print a hollow rectangular pattern
using stars (*), as shown below:

*****
*   *
*   *
*   *
*****
*/

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == 1 || i == 5 || j == 1 || j == 5)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}
