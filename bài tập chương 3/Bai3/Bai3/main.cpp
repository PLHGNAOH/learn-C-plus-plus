#include<stdio.h>
#include<conio.h>
int main()
{
	int a, b, c, d;

	printf("Nhap a=");
	scanf_s("%d", &a);

	printf("Nhap b=");
	scanf_s("%d", &b);

	printf("Nhap c=");
	scanf_s("%d", &c);

	printf("Nhap d=");
	scanf_s("%d", &d);

	int Min, Max;
	Min = a < b ? a : b;
	Min = Min < c ? Min : c;
	Min = Min < d ? Min : d;

	Max = a > b ? a : b;
	Max = Max > c ? Max : c;
	Max = Max > d ? Max : d;

	printf("\nMin=%d", Min);
	printf("\nMax=%d", Max);

	_getch();
	return 0;
}