#include <stdio.h>

int main() {

    int evensum = 0;
    int oddsum = 0;

    for (int r = 1; r <= 10; r++) {

        if (r % 2 == 0) {
            evensum = evensum + r;
        }
        else {
            oddsum = oddsum + r;
        }
    }

    printf("Even sum = %d\n", evensum);
    printf("Odd sum = %d", oddsum);

    return 0;
}
