#include <stdio.h>

int main() {
    int num;

    
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    if (num < 1000 || num > 9999) {
        printf("Invalid input. Please enter a 4-digit number.\n");
        return 1;
    }

    int digits[4];
    for (int i = 3; i >= 0; i--) {
        digits[i] = num % 10;
        num /= 10;
    }

    printf("All possible numbers that can be formed using the four digits:\n");

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (j != i) {
                for (int k = 0; k < 4; k++) {
                    if (k != i && k != j) {
                        for (int l = 0; l < 4; l++) {
                            if (l != i && l != j && l != k) {
                                printf("%d%d%d%d\n", digits[i], digits[j], digits[k], digits[l]);
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}
