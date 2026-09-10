#include <stdio.h>

int main()
{
    int rows;
    printf("Enter rows: ");
    scanf("%d", &rows);

    char letter = 'A' + rows - 1;

    int frontSpace = rows - 1;
    int insideSpace = 0;

    int r = 1;

    while (r <= rows)
    {
        // Print front spaces
        int i = 1;
        while (i <= frontSpace)
        {
            printf(" ");
            i++;
        }

        // Print first letter
        printf("%c", letter);

        // Print inside spaces and second letter
        if (r > 1)
        {
            i = 1;
            while (i <= insideSpace)
            {
                printf(" ");
                i++;
            }

            printf("%c", letter);
        }

        printf("\n");

        letter--;
        frontSpace--;

        if (r == 1)
            insideSpace = 1;
        else
            insideSpace = insideSpace + 2;

        r++;
    }

    return 0;
}
