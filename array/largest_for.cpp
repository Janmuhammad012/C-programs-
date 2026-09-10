#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int largest = num;
    int smallest = num;

    for (int i = 1; i <= 9; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > largest)
        {
            largest = num;
        }

        if (num < smallest)
        {
            smallest = num;
        }
    }

    printf("%d is the largest\n", largest);
    printf("%d is the smallest\n", smallest);

    return 0;
}
