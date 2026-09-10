#include <stdio.h>

void binary(int num);

int main()
{
    int num;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Binary number = ");

    binary(num);

    return 0;
}

void binary(int num)
{
    int rem[32];
    int i = 0;
    int j;

    while(num > 0)
    {
        rem[i] = num % 2;
        num = num / 2;
        i++;
    }

    for(j = i - 1; j >= 0; j--)
    {
        printf("%d", rem[j]);
    }
}
