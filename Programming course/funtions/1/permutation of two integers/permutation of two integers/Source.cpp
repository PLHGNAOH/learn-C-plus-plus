#include<stdio.h>
#include<conio.h>
void nhap(int& n)
{
	printf("\nenter n ");
	scanf_s("%d", &n);
}
void Hoanvi(int& a, int& b)
{
	a = a + b;
	b = a - b;
	a = a - b;

}
int main()
{
	int a, b;
	nhap(a);
	nhap(b);
	printf("\nTruoc khi hoan vi a= %2d,b= %2d ",a,b);
	Hoanvi(a, b);
	printf("\nSau khi hoan vi a= %2d ,b= %2d",a,b);


	_getch();
	return 0;
}