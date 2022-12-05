#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	int count = 0;
	printf("\nEnter a posible integer n ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n;i++)
	{
		if (n % i == 0 && i % 2 == 1);
		{
			printf("\nList all of odd divisor of a posible integer n %d", i);
			i++;
		}
	}
	_getch();
	return 0;
}