#include <stdio.h>
int larg(int);
int max;
int first = 1;
int main()
{
    int n;
    int largest;
    int i = 1;

    while(i <= 5)
    {
        printf("Enter number: ");
        scanf("%d", &n);

        largest = larg(n);

        i++;
    }

    printf("Largest = %d", largest);

    return 0;
}

int larg(int a)
{
    if(max)
    {
        max = a;
        first = 0;
    }#include <stdio.h>

int larg(int);

int max;
int first = 1;

int main()
{
    int n;
    int largest;
    int i = 1;

    while(i <= 5)
    {
        printf("Enter number: ");
        scanf("%d", &n);

        largest = larg(n);

        i++;
    }

    printf("Largest = %d", largest);

    return 0;
}

int larg(int a)
{
    if(first)
    {
        max = a;
        first = 0;
    }

    else if(a > max)
    {
        max = a;
    }

    return max;
}

    else if(a > max)
    {
        max = a;
    }

    return max;
}
