#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	printf("enter n ");
	scanf_s("%d", &n);
	int max = 1;
	int count = 1;
	int temp = n;
	if (n == 0)
	{
		count = 1;
	}
	do
	{
		i = n % 10;
		if (i == max)
		{
			count++;
		}
		if (i > max)
		{
			max = i;
		}
	} while (n /= 10);
	printf("\nchu so lon nhat trong so nguyen duong %d la %d ", temp, max);
	printf("\nCo %d chu so  %d trong so %d", count,max, temp);
	_getch();
	return 0;

}