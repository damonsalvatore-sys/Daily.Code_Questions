/* 
   Day 3 Question:
   Given an array of daily temperatures, find the length of the 
   longest consecutive strictly increasing streak.

   Input:  [10, 12, 15, 14, 16, 18, 20]
   Output: 4
   Explanation: 14, 16, 18, 20 is the longest increasing streak.
*/

#include <stdio.h>

int longestIncreasingStreak(int temps[], int size) {
    if (size == 0) {
        return 0;
    }

    int maxLength = 1;
    int currentLength = 1;

    for (int i = 1; i < size; i++) {
        // If the current day is warmer than the previous day
        if (temps[i] > temps[i - 1]) {
            currentLength++;
        } else {
            // Streak broken! Reset current streak length to 1
            currentLength = 1;
        }

        // Keep track of the highest streak found so far
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }

    return maxLength;
}

int main() {
    int temperatures[] = {10, 12, 15, 14, 16, 18, 20};
    int size = sizeof(temperatures) / sizeof(temperatures[0]);

    int result = longestIncreasingStreak(temperatures, size);
    printf("Longest streak: %d\n", result);

    return 0;
}
