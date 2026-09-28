#include <stdio.h>
#include <stdlib.h>

/*
Question 14:
Given two arrays arr1 and arr2, find the smallest difference
between any two elements, one from each array.

Input:
arr1 = {1, 3, 15, 11, 2}
arr2 = {23, 127, 235, 19, 8}

Output: 3
*/

int main()
{
    int arr1[] = {1, 3, 15, 11, 2};
    int arr2[] = {23, 127, 235, 19, 8};

    int m = 5, n = 5;
    int min = abs(arr1[0] - arr2[0]);
    int diff;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            diff = abs(arr1[i] - arr2[j]);

            if (diff < min)
                min = diff;
        }
    }

    printf("Smallest difference = %d", min);

    return 0;
}
