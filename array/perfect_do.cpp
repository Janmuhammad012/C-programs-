#include <stdio.h>

int main() {
    int num, i = 1, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    do {
        if (num % i == 0) {
            sum = sum + i;
        }
        i++;
    } while (i < num);

    if (sum == num) {
        printf("%d is a Perfect Number", num);
    }
    else if (sum > num) {
        printf("%d is an Abundant Number", num);
    }
    else {
        printf("%d is a Deficient Number", num);
    }

    return 0;
}
