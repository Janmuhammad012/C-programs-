#include <stdio.h>

int main()
{
    int rows;
    printf("Enter rows: ");
    scanf("%d", &rows);

    int r = 1;
    int space = 0;
    int star = rows;

    int left = 1;
    int right = rows * rows + 1;

    while (r <= rows)
    {
        int c1 = 1;
        while (c1 <= space)
        {
            printf(" ");
            c1++;
        }

        int c2 = 1;
        while (c2 <= star)
        {
            printf("%d", left);
            left++;

            if (c2 != star)
                printf("*");

            c2++;
        }

        c2 = 1;
        while (c2 <= star)
        {
            printf("*%d", right);
            right++;

            c2++;
        }

        printf("\n");

        space++;
        star--;
        r++;
    }

    return 0;
}
