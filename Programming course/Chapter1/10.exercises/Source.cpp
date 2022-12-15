#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.14

int main()
{
	float bankinh,cv,dt;
	printf("\nNhap ban kinh cua duong tron: ");
	scanf_s("%f", &bankinh);

	cv = bankinh * 2 * pi;
	dt = pow(bankinh, 2) * pi;

	printf("\nChu vi va dien tich hinh tron lan luot la %.2f, %.2f", cv, dt);

	_getch();
	return 0;
}