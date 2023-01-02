#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	printf("enter n ");
	scanf_s("%d", &n);
	int max = 0;
	int temp = n;
	do
	{
		i = n % 10;
		if (i > max)
		{
			max = i;
		}

	} while (n /= 10);
	printf("\nchu so lon nhat cua so nguyen duong %d la %d", temp, max);
	_getch();
	return 0;

}