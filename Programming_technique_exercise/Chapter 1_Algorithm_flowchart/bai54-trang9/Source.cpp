#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	printf("enter n ");
	scanf_s("%d", &n);
	int min = n % 10;;
	int count = 0;
	int temp = n;
	if (n == 0)
	{
		min = 0;
		count = 1;
	}
	do
	{
		i = n % 10;
		if (i == min)
		{
			count++;
		}
		
		if (i < min)
		{
			min = i;
		}
		

	} while (n /= 10);
	printf("\nChu so nho nhat trong so nguyen duong %d la %d ", temp, min);
	printf("\nCo %d chu so %d trong so nguyen duong %d ", count, min, temp);
	_getch();
	return 0;
}