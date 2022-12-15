#include<stdio.h>
#include<conio.h>
int main()
{
	double a, b,tong,hieu,tich,thuong;
	printf("\nNhap a: ");
	scanf_s("%f", &a);

	printf("\nNhap b: ");
	scanf_s("%f", &b);

	tong = a + b;
	hieu = a - b;
	tich = a * b;
	thuong = a / b;


	printf("\nTong=%f, hieu=%f, tich=%f, thuong=%f", tong, hieu, tich, thuong);

	_getch();
	return 0;

}