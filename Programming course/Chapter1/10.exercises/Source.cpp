#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.14;
int main()
{
	float r,cv,dt;
	printf("\nNhap ban kinh: ");
	scanf_s("%f", &r);

	cv = r * 2 * pi;
	dt = pow(r, 2) * pi;

	printf("\nChu vi va dien tich hinh tron lan luot la %.2f ,%.2f ", cv, dt);

	_getch();
	return 0;
}