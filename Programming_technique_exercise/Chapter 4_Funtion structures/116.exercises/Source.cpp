#include<stdio.h>
#include<conio.h>
void nhap(int& n)
{
	printf("\nEnter n ");
	scanf_s("%d", &n);
}

long tong(int n)
{
	long s = 0;
	int i = 1;
	while (i <= n)
	{
		s = s + i;
		i = i + 1;
	}
	_getch();
	printf("\nTong=%ld ", s);
	return s;
}
int main()
{
	int n;
	nhap(n);
	long kq = tong(n);

	_getch();
	return 0;

}