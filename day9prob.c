#include <stdio.h>

void reverse(int nums[], int start, int end)
{
    while (start < end)
    {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;

        start++;
        end--;
    }
}

void rotate(int nums[], int numsSize, int k)
{
    k = k % numsSize;

    // Step 1: Reverse the whole array
    reverse(nums, 0, numsSize - 1);

    // Step 2: Reverse first k elements
    reverse(nums, 0, k - 1);

    // Step 3: Reverse remaining elements
    reverse(nums, k, numsSize - 1);
}

int main()
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int k = 3;

    rotate(nums, n, k);

    printf("Rotated array: ");

    for (int i = 0; i < n; i++)
        printf("%d ", nums[i]);

    return 0;
}
