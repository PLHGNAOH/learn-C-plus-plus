#include<stdio.h>
#include<conio.h>
void enter(int &n)
{
	do 
	{
		printf("\nenter a posible interger n ");
		scanf_s("%d", &n);
		if (n < 0)
		{
			printf("\nPlease re-enter ");
		}

	} while (n < 0);
}

int sumsumofoddnumbers(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i%2 ==1)
		{
			sum = sum + i;
		}
	
	}
	printf("\nSum=%d", sum);
	return sum;
}
int danhsachsole(int n)
{
	int i = 1;
	printf("\ndanh sach cac so le la ");
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 1)
		{
			printf("\n%d", i);
		}
	}
	return n;
}
int main()
{
	int a;
	enter(a);
	danhsachsole(a);
	sumsumofoddnumbers(a);
	_getch();
	return 0;
}