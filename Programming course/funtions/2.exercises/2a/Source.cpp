#include<stdio.h>
#include<conio.h>
#include<math.h>
void nhap(int &n)
{
	printf("\nNhap n ");
	scanf_s("%d", &n);

}
int TraVeSoDao(int n)
{
	int soluongchuso = log10((double)n);
	int tong = 0;
	while (n != 0)
	{
		tong += n % 10 * pow(10.0, soluongchuso--);
		n /= 10; 
	}
	printf("\nkq %d", tong);
	return tong;
}
int main()
{
	int n;
	nhap(n);
	int kq = TraVeSoDao(n);

	_getch();
	return 0;

}