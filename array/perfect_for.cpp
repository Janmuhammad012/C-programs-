#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == num)
    {
        printf("%d is a Perfect Number", num);
    }
    else if (sum > num)
    {
        printf("%d is an Abundant Number", num);
    }
    else
    {
        printf("%d is a Deficient Number", num);
    }

    return 0;
}
