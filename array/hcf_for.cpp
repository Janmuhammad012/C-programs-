#include <stdio.h>

int main() {
    int n1, n2, hcf = 1;

    printf("Enter n1 and n2\n");
    scanf("%d%d", &n1, &n2);

    for (int r = 1; r <= n1 && r <= n2; r++) {
        if (n1 % r == 0 && n2 % r == 0) {
            hcf = r;
        }
    }

    printf("HCF of %d and %d = %d", n1, n2, hcf);

    return 0;
}
