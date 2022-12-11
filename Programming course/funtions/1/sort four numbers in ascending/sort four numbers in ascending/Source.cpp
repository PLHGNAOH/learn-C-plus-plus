#include<stdio.h>
#include<conio.h>
void nhap(int& n)
{
	printf("\nEnter n ");
	scanf_s("%d", &n);

}
void hoanvi(int &a, int &b)
{
	a = a + b;
	b = a - b;
	a = a - b;
		
}
void sapxep(int &a, int &b, int &c, int &d)
{
	if (a > b)
	{
		hoanvi(a, b);
	}
	if (a > c)
	{
		hoanvi(a, c);
	}
	if (a > d)
	{
		hoanvi(a, d);
	}
	if (b > c)
	{
		hoanvi(b, c);
		
	}
	if (b > d)
	{
		hoanvi(b, d);
	}
	if (c > d)
	{
		hoanvi(c, d);
	}
}
int main()
{
	int a, b, c, d;
	nhap(a);
	nhap(b);
	nhap(c);
	nhap(d);
	printf("\ntruoc khi sap xep %d ==> %d ==> %d ==> %d ", a, b, c, d);
	sapxep(a, b, c, d);
	printf("\ntruoc khi sap xep %d ==> %d ==> %d ==> %d ", a, b, c, d);

	_getch();
	return 0;
}