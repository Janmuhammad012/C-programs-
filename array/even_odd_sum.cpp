#include <stdio.h>

int main() {

    int r = 1;
    int evensum = 0;
    int oddsum = 0;

    do {

        if (r % 2 == 0) {
            evensum = evensum + r;
        }
        else {
            oddsum = oddsum + r;
        }

        r++;

    } while (r <= 10);

    printf("Even sum = %d\n", evensum);
    printf("Odd sum = %d", oddsum);

    return 0;
}
