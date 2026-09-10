#include <stdio.h>

int main()
{
    int rows;
    printf("Enter rows: ");
    scanf("%d",&rows);

    int left = rows - 1;
    int middle = 0;
    char ch = 'A' + rows - 1;

    int r = 1;

    while(r <= rows)
    {
        // Left spaces
        int i = 1;
        while(i <= left)
        {
            printf(" ");
            i++;
        }

        // First letter
        printf("%c", ch);

        // Middle spaces + Second letter
        if(r > 1)
        {
            i = 1;
            while(i <= middle)
            {
                printf(" ");
                i++;
            }

            printf("%c", ch);
        }

        printf("\n");

        left--;
        middle = middle + 2;
        ch--;
        r++;
    }

    return 0;
}
