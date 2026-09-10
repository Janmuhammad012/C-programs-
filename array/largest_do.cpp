#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int largest = num;
    int smallest = num;

    int i = 1;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &num);

        if(num > largest)
        {
            largest = num;
        }

        if(num < smallest)
        {
            smallest = num;
        }

        i++;

    } while(i <= 9);

    printf("%d is the largest\n", largest);
    printf("%d is the smallest\n", smallest);

    return 0;
}
