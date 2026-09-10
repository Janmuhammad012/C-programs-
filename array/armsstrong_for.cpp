#include <stdio.h>
#include <math.h>

int main()
{
    int num;

    for (num = 1; num <= 500; num++)
    {
        int count = 0;
        int dn = num;

        // Count digits
        for (; dn > 0; dn /= 10)
        {
            count++;
        }

        dn = num;
        int sum = 0;

        // Calculate sum of digits raised to the power of count
        for (; dn > 0; dn /= 10)
        {
            int digit = dn % 10;
            sum = sum + pow(digit, count);
        }

        if (sum == num)
        {
            printf("%d ", num);
        }
    }

    return 0;
}
