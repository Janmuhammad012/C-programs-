#include<stdio.h>

int main()
{
    int rows;
    printf("Enter rows: ");
    scanf("%d",&rows);

    int r = 1;

    while(r <= rows)
    {
        int c = 1;

        while(c <= (2 * rows - 1))
        {
            if(c == rows - r + 1 || c == rows + r - 1)
            {
                printf("%c", 'A' + rows - r);
            }
            else
            {
                printf(" ");
            }
            c++;
        }

        printf("\n");
        r++;
    }

    return 0;
}
