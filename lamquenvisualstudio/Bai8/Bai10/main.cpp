#include<stdio.h>
#include<conio.h>
#define PI 3.14
int main()
{
	float bankinh, chuvi, dientich;
	printf("\nNhap vao ban kinh: ");
	scanf_s("%f", &bankinh);

	chuvi = bankinh * 2 * PI;
	dientich = bankinh * bankinh * 3.14;
	printf("\nChu vi va dientich lan luot la: %.2f, %.2f ", chuvi, dientich);

	_getch();
	return 0;
}