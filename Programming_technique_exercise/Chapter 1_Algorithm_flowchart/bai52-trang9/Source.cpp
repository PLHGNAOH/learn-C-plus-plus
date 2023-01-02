#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	printf("enter n ");
	scanf_s("%d", &n);
	int min = 9;
	int temp = n;
	do
	{
		i = n % 10;
		if (i < min)
		{
			min = i;
		}

	} while (n /= 10);
	printf("\nso nho nhat cua so nguyen duong %d la %d", temp, min);
	_getch();
	return 0;

}