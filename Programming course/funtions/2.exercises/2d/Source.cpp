#include<stdio.h>
#include<conio.h>
#include<math.h>
void enter(int& n)
{
	do
	{
		printf("\nenter a posible interger n ");
		scanf_s("%d", &n);
		if (n < 0)
		{
			printf("\nplease re-enter ");

		}

	} while (n < 0);
}
int checkprimes(int n)
{
	if (n < 2)
	{
		printf("\nkhong la so nguyen to ");
		return 0;
	}
	int count = 0;
	for (int i = 2; i = n; i++)
	{
		if (n % i == 0)
		{
			count++;
		}
	}
	if (count == 0)
	{
		printf("\n%d la so nguyen to  ", n);
	}
	else
	{
		printf("\n%d khong la so nguyen to ", n);
	}
	return n;
}
int main()
{
	int a;
	enter(a);
	checkprimes(a);
	_getch();
	return 0;
}