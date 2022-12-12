#include<stdio.h>
#include<conio.h>
#include<string.h>
char hoten[30];
int toan, van;
float dtb;
void nhap()
{
	fflush(stdin);
	printf("\nNhap ho ten: ");
	gets_s(hoten);

	printf("\nNhap toan: ");
	scanf_s("%d", &toan);

	printf("\nNhap van: ");
	scanf_s("%d", &van);

}
void xuly()
{
	dtb = (toan + van) / 2.0;
}
void xuat()
{
	printf("\nHoten:%s ", hoten);
	printf("\ntoan: %d", toan);
	printf("\nvan: %d", van);
	printf("\ndtb: %f", dtb);
}
int main()
{
	nhap();
	xuly();
	xuat();

	_getch();
	return 0;
	
}