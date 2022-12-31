#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	do
	{
		printf("enter n ");
		scanf_s("%d", &n);
		if (n <= 0)
		{
			printf("re-enter n ");
		}
	} while (n <= 0);
	int temp;
	int sodaonguoc = 0;

	while (n >= 1)
	{
		temp = n % 10;
		sodaonguoc = sodaonguoc * 10 + temp;
		n/= 10;
	}
	printf("\nSo dao nguoc la %d", sodaonguoc);
	_getch();
	return 0;

}