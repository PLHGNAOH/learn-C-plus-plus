#include<stdio.h>
#include<conio.h>
#include<math.h>
void nhap(int& n)
{
	do {
		printf("\nEnter n ");
		scanf_s("%d", &n);
		if (n < 0)
		{
			printf("\nRe-enter: ");
		}

	} while (n<0);	
}
int TraVeSoDao(int n)
{
	int soluongchuso = log10((double)n);
	int tong = 0;
	while (n != 0)
	{
		tong += n % 10 * pow(10.0, soluongchuso--);
		n /= 10; 
	}
	
	return tong;
}

int KiemTraDoiXung(int n)
{
	
	int sodao = TraVeSoDao(n);
	if (n == sodao)
	{
		return 1;
	}
		
	return 0;
}
int main()
{
	int a;
	nhap(a);
	int check = KiemTraDoiXung(a);
	if (check == 1)
	{
		printf("\nLa so doi xung ");
	}
	else
	{
		printf("\nKhong phai la so doi xung ");
	}
	
	_getch();
	return 0;
}