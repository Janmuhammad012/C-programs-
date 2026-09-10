#include <stdio.h>

int main()
{
    int password = 123;
    int try1;
    int r = 1;

    do
    {
        printf("Enter password: ");
        scanf("%d", &try1);

        if(try1 == password)
        {
            printf("Correct password\n");
            break;
        }
        else
        {
            printf("Wrong password\n");
        }

        r++;

    } while(r <= 3);

    if(r > 3)
    {
        printf("Access denied\n");
    }

    return 0;
}
