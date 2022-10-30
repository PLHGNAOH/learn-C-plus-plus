#include<stdio.h>
#include<conio.h>
#define Pi 3.14
int main()

{
	float bankinh, chuvi, dientich;

	printf("\nNhap ban kinh: ");
	scanf_s("%f", &bankinh);
	
	chuvi = bankinh * 2 * Pi;
	dientich = bankinh * bankinh * Pi;
	
	printf("\n chu vi bang=%.2f", chuvi);
	printf("\n dientich bang=%.2f", dientich);

	_getch();
	return 0;
 }
