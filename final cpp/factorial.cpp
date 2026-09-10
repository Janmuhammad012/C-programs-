#include <stdio.h>

int factorial(int n)
{
    int fact=1;
    int i;

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }

    return fact;
}

int main()
{
    int sum=0;

    for(int i=1;i<=5;i++)
    {
        sum=sum+factorial(i)/i;
    }

    printf("Sum of series =%d",sum);

    return 0;
}
