#include<stdio.h>
#include<conio.h>
int main()
{
	float a, b;
	float tong, hieu, tich, thuong;
	printf("\nNhap a= ");
	scanf_s("%f", &a);
	printf("\nNhap b= ");
	scanf_s("%f", &b);

	tong = a + b;
	hieu = a - b;
	tich = a * b;
	thuong = a / b;

	printf("\n%.1f+%.1f=%.1f", a, b, tong);
	printf("\n%.1f-%.1f=%.1f", a, b, hieu);
	printf("\n%.f*%.1f=%.1f", a, b, tich);
	b == 0 ?
		printf("\nb la so 0 nen khong chia duoc") : printf("\n%.1f / %.1f =%.1f ", a, b, thuong);
	_getch();
	return 0;

}
	
	

 
