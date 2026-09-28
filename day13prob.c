#include <stdio.h>

/*
Question 13: Median of Two Sorted Arrays

Given two sorted arrays nums1 and nums2 of sizes m and n
respectively, find and return the median of the two sorted arrays.

Example:
nums1 = {1, 3}
nums2 = {2}

Output: 2.0
*/

double findMedian(int nums1[], int m, int nums2[], int n)
{
    int merged[m + n];
    int i = 0, j = 0, k = 0;

    /* Merge the two sorted arrays */
    while (i < m && j < n)
    {
        if (nums1[i] < nums2[j])
            merged[k++] = nums1[i++];
        else
            merged[k++] = nums2[j++];
    }

    while (i < m)
        merged[k++] = nums1[i++];

    while (j < n)
        merged[k++] = nums2[j++];

    int total = m + n;

    /* Find median */
    if (total % 2 != 0)
        return merged[total / 2];
    else
        return (merged[total / 2 - 1] + merged[total / 2]) / 2.0;
}

int main()
{
    int nums1[] = {1, 3};
    int nums2[] = {2};

    int m = 2;
    int n = 1;

    printf("Median = %.1f\n", findMedian(nums1, m, nums2, n));

    return 0;
}
