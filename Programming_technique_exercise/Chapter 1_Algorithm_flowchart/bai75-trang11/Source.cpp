#include <stdio.h>
#include <conio.h>

int main()
{
    int n, k;
    unsigned int p = 1;
    do
    {
        printf("n = ");
        scanf_s("%d", &n);
    } while (n <= 0);

    for (k = 1; p < n; k++)
    {
        p *= 2;
    }

    if (p == n)
    {
        printf("%d is 2^%d format", n, k - 1);
    }
    else
    {
        printf("%d is not 2^k format", n);
    }
    getch();
    return 0;
}