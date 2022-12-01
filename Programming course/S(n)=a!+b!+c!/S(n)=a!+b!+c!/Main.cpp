//S=a!+b!+c!
#include<stdio.h>
#include<conio.h>
void Nhap(int &n)
{
	do{
		printf("Nhap vao so nguyen duong ");
		scanf_s("%d", &n);

		if (n <= 0)
		{
			printf("\nGia tri khong hop le! Vui long nhap lai ");
		}
	} while (n <= 0);
}
    int TinhGiaiThua(int n)
	{
	      int Tich = 1;
	     for (int i = 2; i <= n; i++)
	      {
		   Tich *= i;
	      } 
	return Tich;
	 }
int main()
{
	int a, b, c;
	Nhap(a);
	Nhap(b);
	Nhap(c);
	 
	int S = TinhGiaiThua(a) + TinhGiaiThua(b) + TinhGiaiThua(c);
	printf("\nS= a! + b! + c!= %d! + %d! + %d! = %d", a, b, c, S);

	_getch();
	return 0;
 }