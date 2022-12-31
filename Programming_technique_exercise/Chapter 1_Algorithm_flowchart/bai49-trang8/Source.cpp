#include<stdio.h>
#include<conio.h>
int main()
{
	int n,first;
	do
	{
		printf("enter n ");
		scanf_s("%d", &n);
		if (n <= 0)
		{
			printf("re-enter n ");
		}

	} while (n <= 0);
	int temp = n;
	do
	{
		first = temp % 10;
	} while (temp /= 10);
	printf("\nChu so dau tien cua n la %d ", first);
	_getch();
	return 0;
}