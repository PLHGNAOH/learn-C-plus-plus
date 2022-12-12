#include<stdio.h>
#include<conio.h>
#include<math.h>

void nhap(int& n)
{
	printf("\nNhap n ");
	scanf_s("%d", &n);
}
long tong(int n)
{
	long s = 0;
	int x;
	printf("\nEnter x: ");
	scanf_s("%d", &x);
	
	for (int i = 1; i <= n; i++)
	{
		s = s + pow(x, i);
	}
	printf("\nTong=%ld", s);
	return s;
}
int main()
{
	int n;
	nhap(n);
	long kq = tong(n);
	_getch();
	return 0;
}