#include<stdio.h>
#include<conio.h>
int main()
{
	int n,chusodautien;
	printf("enter n ");
	scanf_s("%d", &n);
	int temp = n;
	while (temp != 0)
	{
	 chusodautien = temp % 10;
		temp /= 10;
	}
	printf("\nChu so dau tien cua so nguyen duong %d la %d ", n, chusodautien);
	_getch();
	return 0;
}