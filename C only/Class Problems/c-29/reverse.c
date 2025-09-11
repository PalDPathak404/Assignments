#include <stdio.h>

int main() {
    int num, temp, digit, reverse;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // -------- Using for loop --------
    temp = num;
    reverse = 0;
    for (; temp != 0; temp /= 10) {
        digit = temp % 10;        // Get last digit
        reverse = reverse * 10 + digit; // Build reversed number
    }
    printf("Reversed number using for loop: %d\n", reverse);
}