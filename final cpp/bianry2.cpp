#include <stdio.h>

void binary(int num)
{
    if(num > 1)
    {
        binary(num/ 2);
    }

    printf("%d",num % 2);
}

int main()
{
    int num;

    printf("Enter decimal number: ");
    scanf("%d", &num);

    printf("Binary of %d = ",num);
    binary(num);

    return 0;
}
