#include <stdio.h>

int main() {
    int num, digit, smallest;
    printf("Enter a number: ");
    scanf("%d", &num);
    smallest = 9;
    while (num != 0) {
        digit = num % 10;
        if (digit < smallest) {
            smallest = digit;
        }
        num = num / 10;
    }

    printf("The smallest digit is: %d\n", smallest);

    return 0;
}
