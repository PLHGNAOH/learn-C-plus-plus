#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("enter n ");
	scanf_s("%d", &n);
	int temp = n;
	int count = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			count++;
		}
	}
	printf("\nSo luong uoc so chan cua so nguyen duong %d la %d", temp, count);
	_getch();
	return 0;
}