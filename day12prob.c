#include <stdio.h>

/*
Question:
Given a sorted array, remove the duplicate elements in-place
such that each unique element appears only once.

Input:  5 5 7 8 8 9 9 10 10
Output: 5 7 8 9 10

Time Complexity: O(n)
Space Complexity: O(1)
*/

int removeDuplicates(int a[], int n)
{
    if (n == 0)
        return 0;

    int j = 0;

    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[j])
        {
            j++;
            a[j] = a[i];
        }
    }

    return j + 1;
}

int main()
{
    int a[] = {5, 5, 7, 8, 8, 9, 9, 10, 10};
    int n = 9;

    int newSize = removeDuplicates(a, n);

    printf("Array after removing duplicates: ");

    for (int i = 0; i < newSize; i++)
        printf("%d ", a[i]);

    return 0;
}
