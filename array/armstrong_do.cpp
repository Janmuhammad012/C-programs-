#include <stdio.h>
#include <math.h>

int main()
{
    int num = 1;

    do
    {
        int count = 0;
        int dn = num;

        do
        {
            dn /= 10;
            count++;
        }
        while(dn > 0);

        dn = num;
        int sum = 0;

        do
        {
            int digit = dn % 10;
            sum = sum + pow(digit, count);
            dn /= 10;
        }
        while(dn > 0);

        if(sum == num)
        {
            printf("%d ", num);
        }

        num++;

    }
    while(num <= 500);

    return 0;
}
