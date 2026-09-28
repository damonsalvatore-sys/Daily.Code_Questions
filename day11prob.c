#include <stdio.h>

/*
Question:
Given an array of integers, square every element and
display the squared elements in sorted order.

Input:  -4 -3 -5 1 2 3
Output:  1 4 9 9 16 25
*/

int main()
{
    int a[] = {-4, -3, -5, 1, 2, 3};
    int n = 6;
    int i, j, temp;

    /* Square every element */
    for (i = 0; i < n; i++)
        a[i] = a[i] * a[i];

    /* Sort the squared elements */
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Output: ");

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
