#include <stdio.h>

int main() {
    int n1, n2, lcm;

    printf("Enter value of n1 and n2\n");
    scanf("%d%d", &n1, &n2);

    lcm = (n1 > n2) ? n1 : n2;

    for (;1; lcm++) {
        if (lcm % n1 == 0 && lcm % n2 == 0) {
            break;
        }
    }

    printf("LCM of %d and %d = %d", n1, n2, lcm);

    return 0;
}
