#include <stdio.h>
#include <conio.h>

int  check(int n);
int main()
{
    int i;
    int max = 10000;

    printf("cac so co dang m^3k trong khoang [0, %d]:\n", max);
    for (i = 0; i < 10000; i++)
        check(i) ? printf("%5d", i) : printf("");
    getch();
    return 0;
}
int check(int n)
{
    n = n < 0 ? -n : n;
    if (n < 2)
        return 1;
    while (n > 1)
    {
        int k = 1;
        int s = 0;
        do
        {
            ++k;
            if (k * k > n)
                return 0;
        } while (n % k);
        do
        {
            ++s;
            n /= k;
        } while (n % k == 0);
        if (s % 3)
            return 0;
    }
    return 1;
}