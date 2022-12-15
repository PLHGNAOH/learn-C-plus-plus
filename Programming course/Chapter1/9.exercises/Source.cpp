#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int t, l, h,heso;
	double dtb;

	printf("Nhap diem thi ba mon toan ly hoa ");
	scanf_s("%d", &t);
	scanf_s("%d", &l);
	scanf_s("%d", &h);

	printf("\nNhap heso cuoi ki cua ba mon: ");
	scanf_s("%d", &heso);

	dtb = ((t + l + h) * heso) / pow(double(heso),2);

	printf("Diem trung binh cua ban la: %.2f", dtb);

	_getch();
	return 0;
}