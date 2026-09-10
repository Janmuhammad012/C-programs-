#include <stdio.h>

int main()
{
    int rows;
    printf("Enter rows: ");
    scanf("%d", &rows);

    int innerSpace = 0;
    char limit = 'A' + rows - 1;

    int r = 1;

    do
    {
        char ch = 'A';

        // Part 1
        do
        {
            printf("%c", ch);
            ch++;
        } while (ch <= limit);

        // Part 2
        int s = 1;

        if (innerSpace > 0)
        {
            do
            {
                printf(" ");
                s++;
            } while (s <= innerSpace);
        }

        // Part 3
        ch--;

        if (r == 1)
            ch--;

        do
        {
            printf("%c", ch);
            ch--;
        } while (ch >= 'A');

        printf("\n");

        limit--;

        if (r == 1)
            innerSpace++;
        else
            innerSpace += 2;

        r++;

    } while (r <= rows);

    return 0;
}
