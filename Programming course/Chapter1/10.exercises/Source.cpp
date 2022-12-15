#include <stdio.h>
#include <conio.h>
#include<math.h>

int main()
{
    int n;
    int SoNut = 0;
    
    
    printf("Nhap bien so xe : ");
    scanf_s("%d", &n);

    int sochuso = log10(double(n)) + 1;
    printf("\nXe cua ban co %d chu so va co so nut la \t ", sochuso);

    while (n > 0)
    {
        SoNut +=  n % 10;
        n = n / 10;
    }
    printf(" %d\n", SoNut % 10);
    _getch();
    return 0;
}