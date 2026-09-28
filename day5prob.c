#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int ones = 0, zeros = 0;
    int maxConsecutiveOnes = 0, currentConsecutiveOnes = 0;

    // We will check bit by bit
    int temp = num;
    while (temp > 0) {
        if (temp & 1) {  // if last bit is 1
            ones++;
            currentConsecutiveOnes++;
            if (currentConsecutiveOnes > maxConsecutiveOnes)
                maxConsecutiveOnes = currentConsecutiveOnes;
        } else {         // if last bit is 0
            zeros++;
            currentConsecutiveOnes = 0; // reset consecutive count
        }
        temp >>= 1; // shift right to check next bit
    }

    printf("Number of 1s: %d\n", ones);
    printf("Number of 0s: %d\n", zeros);
    printf("Maximum consecutive 1s: %d\n", maxConsecutiveOnes);

    return 0;
}
