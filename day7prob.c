#include <stdio.h>

int singleNonDuplicate(int* nums, int n) {
    int low = 0, high = n - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;

        // Ensure mid is even (so we compare pairs correctly)
        if (mid % 2 == 1) {
            mid--;
        }

        // If the pair is valid, move right
        if (nums[mid] == nums[mid + 1]) {
            low = mid + 2;
        } else {
            // Otherwise, the single element is on the left side
            high = mid;
        }
    }

    return nums[low];
}

int main() {
    int nums[] = {1,1,2,3,3,4,4,8,8};  // Example input
    int n = sizeof(nums) / sizeof(nums[0]);

    int result = singleNonDuplicate(nums, n);
    printf("Single element is: %d\n", result);

    return 0;
}
