/*
Write a C program that accepts a positive integer containing digits from 0 to 9. Exactly one digit is missing, while the remaining nine digits appear exactly once. 
Input : 854102967
Output:  3
*/
#include <stdio.h>

int main() {
    long long num;
    int digits[10] = {0};  // okay so I made 10 boxes, one for each digit 0-9
    int missing = -1;      // will keep the missing digit here

    printf("Enter a 9-digit number: ");
    scanf("%lld", &num);   // taking input from user

    // now I will check each digit of the number
    while (num > 0) {
        int d = num % 10;   // get last digit
        digits[d] = 1;      // mark that digit as found
        num /= 10;          // remove last digit
    }

    // now I will see which digit was never found
    for (int i = 0; i < 10; i++) {
        if (digits[i] == 0) {   // if box is empty
            missing = i;        // that’s the missing digit
            break;
        }
    }

    printf("Missing digit: %d\n", missing);  // print the answer
    return 0;
}



/*
OPTIMIZED VERSION
#include <stdio.h>

int main() {
    long long num;
    int sum = 0;

    printf("Enter a 9-digit number: ");
    scanf("%lld", &num);

    // add all digits of the number
    while (num > 0) {
        sum += num % 10;   // take last digit and add
        num /= 10;         // remove last digit
    }

    // missing digit = 45 - sum of given digits
    int missing = 45 - sum;

    printf("Missing digit: %d\n", missing);
    return 0;
}


*/
