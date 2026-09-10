#include <stdio.h>

int main()
{
    int password = 123;
    int try1;

    for (int r = 1; r <= 3; r++)
    {
        printf("Enter password: ");
        scanf("%d", &try1);

        if (try1 == password)
        {
            printf("Correct password\n");
            return 0;
        }
        else
        {
            printf("Wrong password\n");
        }
    }

    printf("Access denied\n");

    return 0;
}
