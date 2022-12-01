#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter a positive integer n ");
	scanf_s("%d", &n);
	int Tich = 1;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			printf("\nList of a positive integer n %4d", i);
			Tich = Tich * i;
		}
	}
	printf("\nTich=%d", Tich);

	_getch();
	return 0;
}