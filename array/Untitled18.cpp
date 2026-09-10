#include<stdio.h>

int main()
{
    int rows;
    printf("Enter rows: ");
    scanf("%d",&rows);

    int r = 1;
    int space = rows - 1;
    int mid = 0;
    char ch = 'A' + rows - 1;

    while(r <= rows)
    {
        // Left spaces
        int c1 = 1;
        while(c1 <= space)
        {
            printf(" ");
            c1++;
        }

        // First letter
        printf("%c", ch);

        // Print second letter except first row
        if(r != 1)
        {
            int c2 = 1;
            while(c2 <= mid)
            {
                printf(" ");
                c2++;
            }

            printf("%c", ch);
        }

        printf("\n");

        space--;
        mid = mid + 2;
        ch--;
        r++;
    }

    return 0;
}
